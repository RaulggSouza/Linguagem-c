#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char dia[3];
    char mes[10];
    char ano[5];
} T_DATA;

int retornaMes(int mes, char* str, int dia){
    int is_valid = 0;
    switch (mes){
    case 1:
        strcpy(str, "janeiro");
        if (dia <= 31){
            is_valid = 1;
        }
        break;
    case 2:
        strcpy(str, "fevereiro");
        if (dia <= 28){
            is_valid = 1;
        }
        break;
    case 3:
        strcpy(str, "marco");
        if (dia <= 31){
            is_valid = 1;
        }
        break;
    case 4:
        strcpy(str, "abril");
        if (dia <= 30){
            is_valid = 1;
        }
        break;
    case 5:
        strcpy(str, "maio");
        if (dia <= 31){
            is_valid = 1;
        }
        break;
    case 6:
        strcpy(str, "junho");
        if (dia <= 30){
            is_valid = 1;
        }
        break;
    case 7:
        strcpy(str, "julho");
        if (dia <= 31){
            is_valid = 1;
        }
        break;
    case 8:
        strcpy(str, "agosto");
        if (dia <= 31){
            is_valid = 1;
        }
        break;
    case 9:
        strcpy(str, "setembro");
        if (dia <= 30){
            is_valid = 1;
        }
        break;
    case 10:
        strcpy(str, "outubro");
        if (dia <= 31){
            is_valid = 1;
        }
        break;
    case 11:
        strcpy(str, "novembro");
        if (dia <= 30){
            is_valid = 1;
        }
        break;
    case 12:
        strcpy(str, "dezembro");
        if (dia <= 31){
            is_valid = 1;
        }
        break;
    default:
        break;
    }
    return is_valid;
}

T_DATA* criaData(char* data){
    T_DATA* date;
    date = (T_DATA*) malloc(sizeof(T_DATA));    
    char dia[3] = "";
    int i = 0;
    for (int j = 0; j < 2; i++, j++){
        dia[j] = data[i];
    }
    i++;
    char mes[3] = "";
    for (int j = 0; j < 2; i++, j++){
        mes[j] = data[i];
    }
    int numMes = atoi(mes);
    i++;
    char ano[5] = "";
    for (int j = 0; j < 4; i++, j++){
        ano[j] = data[i];
    }
    char nomeMes[10] = "";
    int is_valid = retornaMes(numMes, nomeMes, atoi(dia));
    if (is_valid){
        strcpy(date->dia, dia);
        strcpy(date->mes, nomeMes);
        strcpy(date->ano, ano);
        return date;
    }
    return NULL;
}

int main(int argc, char const *argv[]){
    char input[11];
    fgets(input, 11, stdin);
    T_DATA* data = criaData(input);
    if (data != NULL){
        printf("%s de %s de %s", data->dia, data->mes, data->ano);
    }else{
        printf("DATA INVALIDA");
    }
    return 0;
}
