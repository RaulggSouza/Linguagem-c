#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    printf("Media de notas de um aluno:\n");
    char nome[30];
    float primeiraNota;
    float segundaNota;
    printf("Insira o nome do aluno: ");
    scanf("%s", nome);
    printf("Insira a primeira nota: ");
    scanf("%f", &primeiraNota);
    printf("Insira a segunda nota: ");
    scanf("%f", &segundaNota);
    float media = (primeiraNota+segundaNota)/2;
    printf("%s obteve %.2f de media", nome, media);
    return 0;
}
