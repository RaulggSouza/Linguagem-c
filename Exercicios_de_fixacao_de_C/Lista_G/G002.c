#include <stdio.h>
#include <stdlib.h>

void printVetor(int* vet, int size){
    for (int i = 0; i < size; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

void populaVetor(int* vet, int* size, int n){
    for (int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        vet[i] = num;
        (*size)++;
    }
}

void removerElemento(int* vet, int* size, int index){
    for (int i = index; i < (*size)-1; i++){
        vet[i] = vet[i+1];
    }
    (*size)--;
}

int main(int argc, char const *argv[]){
    int n;
    int size = 0;
    scanf("%d", &n);
    int* vet = (int*) malloc(sizeof(int) * n);
    populaVetor(vet, &size, n);
    printVetor(vet, size);
    int i;
    scanf("%d", &i);
    if (i < size){
        removerElemento(vet, &size, i);
        printVetor(vet, size);
    }else{
        printf("INVALIDO");
    }
    free(vet);
    return 0;
}
