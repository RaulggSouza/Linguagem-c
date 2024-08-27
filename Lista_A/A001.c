#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    printf("Soma basica:\n");
    int primeiroNumero;
    int segundoNumero;
    printf("Insira o primeiro numero: ");
    scanf("%d", &primeiroNumero);
    printf("Insira o segundo numero: ");
    scanf("%d", &segundoNumero);
    printf("%d", (primeiroNumero+segundoNumero));
    return 0;
}
