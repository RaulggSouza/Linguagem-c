#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    printf("Porcentual de Votos:\n");
    int eleitores;
    int votos_brancos;
    int votos_nulos;
    int votos_validos;
    int ausentes;

    printf("Digite o numero de eleitores: ");
    scanf("%d", &eleitores);
    printf("Digite o numero de votos brancos: ");
    scanf("%d", &votos_brancos);
    printf("Digite o numero de votos nulos: ");
    scanf("%d", &votos_nulos);
    printf("Digite o numero de votos validos: ");
    scanf("%d", &votos_validos);
    ausentes = eleitores - (votos_brancos+votos_nulos+votos_validos);

    float porcentagem_votos_nulos = ((float) votos_nulos*100)/eleitores;
    float porcentagem_votos_brancos = ((float) votos_brancos*100)/eleitores;
    float porcentagem_votos_validos = ((float) votos_validos*100)/eleitores;
    float porcentagem_ausentes = ((float) ausentes*100)/eleitores;

    printf("Nulos: %.2f%%\nBrancos: %.2f%%\nValidos: %.2f%%\nAusentes: %.2f%%", porcentagem_votos_nulos, porcentagem_votos_brancos, porcentagem_votos_validos, porcentagem_ausentes);
    return 0;
}
