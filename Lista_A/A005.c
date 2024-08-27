#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int primeiroNumero;
    int segundoNumero;

    scanf("%d", &primeiroNumero);
    scanf("%d", &segundoNumero);
    
    float divisaoReal = (float) primeiroNumero/segundoNumero;
    int divisaoInteira = primeiroNumero/segundoNumero;
    int restoDivisao = primeiroNumero%segundoNumero;

    printf("%.2f\n%d\n%d\n",divisaoReal, divisaoInteira, restoDivisao);
    return 0;
}
