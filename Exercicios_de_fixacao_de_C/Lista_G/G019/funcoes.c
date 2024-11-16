#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int* populaVetor(int n){
    int* vet = (int*) malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        vet[i] = num;
    }
    return vet;
}

int findValue(int vet[], int x, int size){
    for (int i = 0; i < size; i++){
        if(vet[i] == x){
            return i;
        }
    }
    return -1;
}
