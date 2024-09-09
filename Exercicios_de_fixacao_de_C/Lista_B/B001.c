#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    printf("Maior entre dois numeros:\n");
    int primeiroNumero;
    int segundoNumero;

    printf("Insira o primeiro numero: ");
    scanf("%d", &primeiroNumero);
    printf("Insira o segundo numero: ");
    scanf("%d", &segundoNumero);

    if(primeiroNumero > segundoNumero){
        printf("%d",primeiroNumero);
    }else{
        printf("%d",segundoNumero);
    }
    return 0;
}
