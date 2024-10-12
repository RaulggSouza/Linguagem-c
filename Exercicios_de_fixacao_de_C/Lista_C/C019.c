#include <stdio.h>
#include <stdlib.h>

int multiplicacao(int a, int b){
    int mult = 0;
    for (int i = 0; i < b; i++){
        mult += a;
    }
    return mult;
}

int main(int argc, char const *argv[]){
    int base;
    scanf("%d", &base);
    int expo;
    scanf("%d", &expo);
    int pot = 1;
    for(int i = 1; i <= expo; i++){
        pot = multiplicacao(pot, base);
    }
    printf("%d", pot);
    return 0;
}
