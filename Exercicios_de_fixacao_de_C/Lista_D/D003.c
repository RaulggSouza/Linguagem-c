#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int* list = (int*) malloc(sizeof(int)*n);
    int num;
    int maior = 0;
    int pos_maior = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &num);
        list[i] = num;
        if (num > maior){
            maior = num;
            pos_maior = i;
        }
    }
    printf("%d\n%d", maior, pos_maior);

    return 0;
}
