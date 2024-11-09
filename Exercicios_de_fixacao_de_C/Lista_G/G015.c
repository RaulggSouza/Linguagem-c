#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} T_PONTO;

float calcularDistanciaEuclidiana(T_PONTO* p, T_PONTO* q){
    float distX = p->x - q->x;
    float distY = p->y - q->y;
    float distEuclidiana = sqrt(pow(distX, 2) + pow(distY, 2));
    return distEuclidiana;
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
    float distEuclidiana = calcularDistanciaEuclidiana(p1, p2);
    printf("%.4f", distEuclidiana);
    return 0;
}
