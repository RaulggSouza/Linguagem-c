#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int idadeEleitor;
    scanf("%d", &idadeEleitor);

    if(idadeEleitor <= 15){
        printf("SEM IDADE PARA VOTAR");
    }else if(idadeEleitor > 15 && idadeEleitor < 18){
        printf("FACULTATIVO");
    }else if(idadeEleitor < 70){
        printf("OBRIGATORIO");
    }else{
        printf("DISPENSADO");
    }
    return 0;
}
