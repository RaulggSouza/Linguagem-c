#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int primeiroNumero;
    int segundoNumero;

    scanf("%d", &primeiroNumero);
    scanf("%d", &segundoNumero);

    if(primeiroNumero > segundoNumero){
        printf("%d",primeiroNumero);
    }else{
        printf("%d",segundoNumero);
    }
    return 0;
}
