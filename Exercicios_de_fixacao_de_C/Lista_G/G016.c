#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} T_PONTO;

typedef struct {
    float altura;
    float largura;
    float area;
} T_RETANGULO;


float calcularDistPontos(float p, float q){
    if (p > q){
        return p - q;
    }
    return q - p;
}

T_RETANGULO* criarRetangulo(T_PONTO* p, T_PONTO* q){
    T_RETANGULO* ret = malloc(sizeof(T_RETANGULO));
    float distX = calcularDistPontos(p->x, q->x);
    float distY = calcularDistPontos(p->y, q->y);
    float area = distX*distY;
    ret->altura = distY;
    ret->largura = distX;
    ret->area = area;
    return ret;
}

T_PONTO* criarPonto(){
    T_PONTO* ponto = malloc(sizeof(T_PONTO));
    float x;
    float y;
    scanf("%f", &x);
    scanf("%f", &y);
    ponto->x = x;
    ponto->y = y;
    return ponto;
}

int main(int argc, char const *argv[]){
    T_PONTO* p1 = criarPonto();
    T_PONTO* p2 = criarPonto();
    T_RETANGULO* ret = criarRetangulo(p1, p2);
    printf("%.4f", ret->area);
    free(ret);
    free(p1);
    free(p2);
    return 0;
}
