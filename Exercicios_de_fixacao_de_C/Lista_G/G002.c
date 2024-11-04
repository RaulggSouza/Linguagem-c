#include <stdio.h>
#include <stdlib.h>

void populaVetor(int* vet, int* size, int n){
    for (int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        vet[i] = num;
        (*size)++;
    }
}

void remover(int* vet, int* size, int index){
    for (int i = index; i < size-1; i++){
        vet[i] = vet[i+1];
    }
    
}

int main(int argc, char const *argv[]){
    int n;
    int size = 0;
    scanf("%d", &n);
    int* vet = (int*) malloc(sizeof(int) * n);
    populaVetor(vet, &size, n);
    int i;
    scanf("%d", &i);

    return 0;
}
