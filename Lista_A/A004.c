#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    char nome[30];
    float primeiraNota;
    float segundaNota;

    scanf("%s", nome);
    scanf("%f", &primeiraNota);
    scanf("%f", &segundaNota);
    float media = (primeiraNota+segundaNota)/2;
    printf("%s obteve %.2f de media", nome, media);
    return 0;
}
