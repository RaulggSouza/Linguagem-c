#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cleanBuffer(FILE *fd){
    while(fgetc(fd) != '\n'){}
}

void zipLine(int count, FILE *saida, int **matrix, int i, int j){
    if (count < 4){
        for (int k = 0; k < count; k++){
            fprintf(saida, "%d ", matrix[i][j-1]);
        }
    }else{
        fprintf(saida, "@ %d %d ", matrix[i][j-1], count);
    }
}

void P2_to_P8(FILE *fd, int row, int column, int depth, FILE *saida){
    fprintf(saida, "P8\n%d %d\n%d\n", column, row, depth);
    int** matrix = (int**) malloc(sizeof(int*) * row);
    for(int i = 0; i < row; i++){
        matrix[i] = (int*) malloc(sizeof(char*) * column);
        for (int j = 0; j < column; j++){
            fscanf(fd, "%d", &matrix[i][j]);
        }
    }
    for(int i = 0; i < row; i++){
        int count = 1;
        int j;
        for (j = 1; j < column; j++){
            if (matrix[i][j-1] == matrix[i][j]){
                count++;
            }else{
                zipLine(count, saida, matrix, i, j);
                count = 1;
            }
        }
        zipLine(count, saida, matrix, i, j);
        fprintf(saida, "\n");
    }
}

void P8_to_P2(FILE *fd, int row, int column, int depth, FILE *saida){
    fprintf(saida, "P2\n%d %d\n%d\n", column, row, depth);
//     char*** matrix = (char***) malloc(sizeof(char**) * row);
//     for(int i = 0; i < row; i++){
//         matrix[i] = (char**) malloc(sizeof(char*) * column);
//         int j = 0;
//         char* c;
//         while (fgets(c, 2, fd) != EOF){
//             if(c != ' '){
//                 j++;
//                 matrix[i][j] = c;
//                 printf("%c", matrix[i][j]);
//                 fprintf(saida, "%c ", matrix[i][j]);
//             }
//         }
        // for (int j = 0; j < column; j++){
        //     fscanf(fd, "%c", &matrix[i][j]);
        // }
    // }
    // for(int i = 0; i < row; i++){
    //     matrix[i] = (char*) malloc(sizeof(char) * column);
    //     for (int j = 0; j < column; j++){
    //         fscanf(fd, "%d", &matrix[i][j]);
    //     }
    // }
}

int main(int argc, char const *argv[]){
    FILE* fd = fopen(argv[1], "r");
    if(fd == NULL){
        printf("Erro");
        return 1;
    }
    char definer[3];
    int row, column, depth;
    fgets(definer, 3, fd);
    fscanf(fd, "%d %d", &column, &row);
    fscanf(fd, "%d", &depth);
    cleanBuffer(fd);
    FILE* saida;
    if (strcmp(definer, "P2") == 0){
        saida = fopen("saida.pgmc", "w");
        P2_to_P8(fd, row, column, depth, saida);
    }else{
        saida = fopen("saida.pgm", "w");
        P8_to_P2(fd, row, column, depth, saida);
    }
    return 0;
}
