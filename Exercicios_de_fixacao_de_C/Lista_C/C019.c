#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]){
    int base;
    scanf("%d", &base);
    int expo;
    scanf("%d", &expo);
    int soma = 0;
    int pot = 1;
    //3³ = 3*3*3 = (3+3+3)+(3+3+3)+(3+3+3)
    //3² = 3*3 = 3+3+3
    //3¹ = 3 = 3 [certo]
    for (int i = 0; i < expo; i++){
        for (int j = 0; j < base; j++){
            soma += pot;
        }
        pot = soma;
        soma = 0;
    }

    printf("%d", pot);
    return 0;
}
