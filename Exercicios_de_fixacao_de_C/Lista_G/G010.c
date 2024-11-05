#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int expo){
    int num = 1;
    for(int i = 0; i < expo; i++){
        num *= base;
    }
    return num;
}

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int* expoentes = (int*) malloc(sizeof(int) * 64);
    int expo = 0;
    int divisor = 1;
    int i = 0;
    while(1){
        if (n == 0){
            break;
        }else{
            if (n/divisor > 1){
                divisor*=10;
                expo++;
            }else{
                expoentes[i] = expo;
                i++;
                expo = 0;
                n -= (n/divisor)*divisor;
                divisor = 1;
            }
        }
    }
    int deci = 0;
    for (int j = 0; j < i; j++){
        deci += potencia(2, expoentes[j]);
    }
    printf("%d", deci);
    return 0;
}
