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

int insert(int* vet, int* size, int index, int elem){
    vet = realloc(vet, sizeof(int) * (*size)+1);
    (*size)++;
    if (index < 0){
        return 0;
    }else if (index <= (*size)){
        for(int i = (*size)-1; i > index; i--){
            vet[i] = vet[i-1];
        }
        vet[index] = elem;
        return 1;    
    }else{
        vet[(*size)-1] = elem;
        return 1;
    }
}

int main(int argc, char const *argv[]){
    int size = 0;
    int n;
    scanf("%d", &n);
    int* vet = malloc(sizeof(int) * n);
    populaVetor(vet, &size, n);
    printVetor(vet, size);
    int index;
    scanf("%d", &index);
    int elem;
    scanf("%d", &elem);
    if (insert(vet, &size, index, elem)){
        printVetor(vet, size);
    }else{
        printf("INVALIDO");
    }
    return 0;
}
