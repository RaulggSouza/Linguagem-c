#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char dia[3];
    char mes[10];
    char ano[5];
} T_DATA;

typedef struct{
    int size;
    T_DATA** data;
} T_CALENDARIO;

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

T_CALENDARIO* criaCalendario(int size){
    T_CALENDARIO* calendario = malloc(sizeof(T_CALENDARIO));
    calendario->data = malloc(sizeof(T_DATA*) * size);
    for (int i = 0; i < size; i++){
        getchar();
        char input[11];
        fgets(input, 11, stdin);
        T_DATA* data = criaData(input);
        calendario->data[i] = data;
    }
    calendario->size = size;
    return calendario;
}

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    T_CALENDARIO* calendario = criaCalendario(n);
    for(int i = 0; i < calendario->size; i++){
        if (calendario->data[i] != NULL){
            printf("%s de %s de %s\n", calendario->data[i]->dia, calendario->data[i]->mes, calendario->data[i]->ano);
        }else{
            printf("DATA INVALIDA\n");
        }
    }
    return 0;
}
