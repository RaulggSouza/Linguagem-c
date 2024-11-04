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

void removerElementos(int* vet, int* size, int elem){
    int i = 0;
    while (i < (*size)){
        if (vet[i] == elem){
            for (int j = i; j < (*size)-1; j++){
                vet[j] = vet[j+1];
            }
            (*size)--;
        }else{
            i++;
        }
    }
}

int main(int argc, char const *argv[]){
    int n;
    int size = 0;
    scanf("%d", &n);
    int* vet = (int*) malloc(sizeof(int) * n);
    populaVetor(vet, &size, n);
    printVetor(vet, size);
    int elem;
    scanf("%d", &elem);
    removerElementos(vet, &size, elem);
    printVetor(vet, size);
    return 0;
}
