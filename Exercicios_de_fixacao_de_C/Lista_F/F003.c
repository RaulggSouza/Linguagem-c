#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int linhas;
    scanf("%d", &linhas);
    int colunas;
    scanf("%d", &colunas);
    int** matrix;
    matrix = (int**) malloc(sizeof(int*) * linhas);
    for (int i = 0; i < linhas; i++){
        matrix[i] = (int*) malloc(sizeof(int) * colunas);
    }
    
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            int num;
            scanf("%d", &num);
            matrix[i][j] = num;
        }
        
    }
    
    for (int i = 0; i < colunas; i++){
        int soma = 0;
        for (int j = 0; j < linhas; j++){
            soma += matrix[j][i];
        }
        /*
        1 2
        3 4
        5 6
        */
        printf("%d\n", soma);
    }

    for (int i = 0; i < linhas; i++){
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}