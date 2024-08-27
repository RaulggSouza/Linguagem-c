#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    printf("Soma, diferenca e protudo:\n");
    int primeiroNumero;
    int segundoNumero;
    printf("Insira o primeiro numero: ");
    scanf("%d", &primeiroNumero);
    printf("Insira o segundo numero: ");
    scanf("%d", &segundoNumero);
    int soma = primeiroNumero + segundoNumero;
    int diferenca = primeiroNumero - segundoNumero;
    int multiplicacao = primeiroNumero * segundoNumero;
    printf("%d\n%d\n%d", soma, diferenca, multiplicacao);
    return 0;
}
