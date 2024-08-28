#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    printf("Divisao real, inteira e resto de divisao:\n");
    int primeiroNumero;
    int segundoNumero;

    printf("Insira o primeiro numero: ");
    scanf("%d", &primeiroNumero);
    printf("Insira o segundo numero: ");
    scanf("%d", &segundoNumero);
    
    float divisaoReal = (float) primeiroNumero/segundoNumero;
    int divisaoInteira = primeiroNumero/segundoNumero;
    int restoDivisao = primeiroNumero%segundoNumero;

    printf("%.2f\n%d\n%d\n",divisaoReal, divisaoInteira, restoDivisao);
    return 0;
}
