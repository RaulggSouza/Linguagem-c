#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int max = 7;
    int size = 0;
    int* temperaturas = (int*) malloc(sizeof(int)*max);
    int temp;
    int media = 0;
    int acima = 0;
    for (int i = 0; i < max; i++){
        scanf("%d", &temp);
        size++;
        media += temp;
        temperaturas[i] = temp;
    }
    media /= size;
    for (int i = 0; i < size; i++){
        if (temperaturas[i] > media){
            acima++;
        }
    }
    printf("%d", acima);
    free(temperaturas);
    return 0;
}
