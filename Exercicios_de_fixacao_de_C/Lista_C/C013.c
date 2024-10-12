#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int soma = 0;
    int x;
    scanf("%d", &x);
    int maior = x, menor = x;
    for (int i = 0; i < n -1 ; i++){
        scanf("%d", &x);
        if (x > maior){
            maior = x;
        }
        if (x < menor){
            menor = x;
        }
        soma += x;
    }
    printf("%d\n%d\n%d", maior, menor, soma);
    return 0;
}
