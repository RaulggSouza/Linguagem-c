#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int primeiroNumero;
    int segundoNumero;
    scanf("%d", &primeiroNumero);
    scanf("%d", &segundoNumero);
    int soma = primeiroNumero + segundoNumero;
    int diferenca = primeiroNumero - segundoNumero;
    int multiplicacao = primeiroNumero * segundoNumero;
    printf("%d\n%d\n%d", soma, diferenca, multiplicacao);
    return 0;
}
