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
    int i;
    int j;
    scanf("%d", &i);
    scanf("%d", &j);
    int soma = 0;
    int a;
    int b;
    if (i <= n && j <= n){
        if (j > i){
            a = i;
            b = j;
        }else{
            b = i;
            a = j;
        }
        for (int k = a; k <= b; k++){
            soma += list[k];
        }
        printf("%d", soma);
    }else{
        printf("INVALIDO");
    }
    free(list);
    return 0;
}
