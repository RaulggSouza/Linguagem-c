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
    int p1 = 0, p2 = 0;
    for (int i = 0; i < s1+s2; i++){
        if(v1[p1] <= v2[p2] || p2 >= s2){
            vet[i] = v1[p1];
            p1++;
        }else if(v2[p2] <= v1[p1] || p1 >= s1){
            vet[i] = v2[p2];
            p2++;
        }
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
    int* vetC = intercalaVetores(vetA, vetB, n, m);
    printVetor(vetC, n+m);
    return 0;
}
