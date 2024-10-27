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
    
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < linhas; i++){
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
