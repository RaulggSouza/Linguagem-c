#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int* vet = populaVetor(n);
    int x;
    scanf("%d", &x);
    int index = findValue(vet, x, n);
    printf("%d", index);
    return 0;
}
