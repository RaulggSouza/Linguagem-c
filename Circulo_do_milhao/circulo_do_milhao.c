#include <stdio.h>
#include <stdlib.h>

int trocar(int* participantes, int tam, int procurado){
    for (int i = 0; i < tam; i++){
        if(participantes[i] == procurado){
            participantes[i] = -1;
            return 1;
        } 
    }
}

int main(int argc, char const *argv[]){
    int n;
    scanf("%d",&n);
    int x;
    scanf("%d",&x);
    int* participantes = (int*) malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++){
        participantes[i] = i+1;
    }
    int troca = 0;
    int i = 0;
    int trocasEfetuadas = 0;
    do{
        if (troca == 0 && participantes[i] != -1){
            troca = 1;
        }else if(troca == 1 && participantes[i] != -1){
            troca = 0;
            int procurado = participantes[i];
            trocasEfetuadas += trocar(participantes, n, procurado);
            if (trocasEfetuadas == x){
                printf("Eliminacao %d: %d\n", x, procurado);
            }
        }
        i++;
        if (i >= n){
            i = 0;
        }
    } while (trocasEfetuadas < n-1);
    for (int i = 0; i < n; i++){
        if (participantes[i] != -1){
            printf("Ganhadora: %d", participantes[i]);
            break;
        }
    }
    free(participantes);
    return 0;
}
