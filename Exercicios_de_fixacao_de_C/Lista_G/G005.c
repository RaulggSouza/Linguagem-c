#include <stdio.h>
#include <stdlib.h>

void printMatriz(int** mat, int l, int c){
    for(int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void printTransposta(int** mat, int l, int c){
    for(int i = 0; i < c; i++){
        for (int j = 0; j < l; j++){
            printf("%d ", mat[j][i]);
        }
        printf("\n");
    }
}
void populaMatriz(int** mat, int l, int c){
    for(int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            int num;  
            scanf("%d", &num);
            mat[i][j] = num;
        }
    }
}

int main(int argc, char const *argv[]){
    int linhas, colunas;
    scanf("%d", &linhas);
    scanf("%d", &colunas);
    int** mat = (int**) malloc(sizeof(int*) * linhas);
    for (int i = 0; i < linhas; i++){
        mat[i] = (int*) malloc(sizeof(int) * colunas);
    }
    populaMatriz(mat, linhas, colunas);
    printMatriz(mat, linhas, colunas);
    printf("\n");
    printTransposta(mat, linhas, colunas);
    return 0;
}
