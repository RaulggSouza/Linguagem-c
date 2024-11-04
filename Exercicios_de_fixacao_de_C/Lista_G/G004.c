#include <stdio.h>
#include <stdlib.h>

void printVetor(int* vet, int n){
    for (int i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

void populaVetor(int* vet, int n){
    for (int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        vet[i] = num;
    }
}

int* intercalaVetores(int* v1, int* v2, int s1, int s2){
    int* vet = (int*) malloc(sizeof(int) * s1+s2);
    int size = 0;
    int i = 0;
    for(int j = 0; i < s2; j+=2){
        vet[j] = v1[i];
        vet[j+1] = v2[i];
        size+=2;
        i++;
    }
    for(int j = i; j < s1; j++){
        vet[size] = v1[j];
        size++;
    }
    return vet;
}

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int* vetA = (int*) malloc(sizeof(int) * n);
    populaVetor(vetA, n);
    printVetor(vetA, n);
    int m;
    scanf("%d", &m);
    int* vetB = (int*) malloc(sizeof(int) * m);
    populaVetor(vetB, m);
    printVetor(vetB, m);
    int* vetC;
    if (n >= m){
        vetC = intercalaVetores(vetA, vetB, n, m);
    }else{
        vetC = intercalaVetores(vetB, vetA, m, n);
    }
    printVetor(vetC, n+m);
    return 0;
}
