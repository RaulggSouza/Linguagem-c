#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int i;
    int somaTotal = 0;
    int somaPar = 0;
    int somaImpar = 0;
    do{
        scanf("%d", &i);
        if (i % 2 == 0){
            somaPar += i;
        }else{
            somaImpar += i;
        }
        somaTotal += i;
    } while (i != 0);
    printf("%d\n", somaPar);
    printf("%d\n", somaImpar);
    printf("%d\n", somaTotal);
    return 0;
}
