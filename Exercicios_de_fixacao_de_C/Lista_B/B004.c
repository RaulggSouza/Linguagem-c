#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int limite_distancia;
    float valor_limite;
    float valor_acima;
    int distancia_percorrida;

    scanf("%d", &limite_distancia);
    scanf("%f", &valor_limite);
    scanf("%f", &valor_acima);
    scanf("%d", &distancia_percorrida);

    float total_pago;
    if (distancia_percorrida <= limite_distancia){
        total_pago = distancia_percorrida * valor_limite;
    }else{
        total_pago = distancia_percorrida * valor_acima;
    }
    printf("%.2f", total_pago);

    return 0;
}
