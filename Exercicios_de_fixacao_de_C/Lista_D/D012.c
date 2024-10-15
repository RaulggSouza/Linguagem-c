#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int* list = (int*) malloc(sizeof(int)*n);
    int num;
    for (int i = 0; i < n; i++){
        scanf("%d", &num);
        list[i] = num;
    }
    int pos_menor = 0;
    int menor = list[pos_menor];
    int pos_maior = n-1;
    int maior = list[pos_maior];
    for (int i = 0; i < n; i++){
        if (list[i] < menor){
            menor = list[i];
            pos_menor = i;
        }
        if (list[i] > maior){
            maior = list[i];
            pos_maior = i;
        }
    }
    int aux = list[0];
    list[0] = menor;
    list[pos_menor] = aux;
    aux = list[n-1];
    list[n-1] = maior;
    list[pos_maior] = aux;
    for (int i = 0; i < n; i++){
        printf("%d ", list[i]);
    }    
    free(list);
    return 0;
}
