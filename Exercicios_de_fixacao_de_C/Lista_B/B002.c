#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    printf("RADAR:\n");
    int limiteDeVelocidade;
    float multaFixa;
    float multaAdicional;
    int velocidadeCaptada;

    printf("Insira o limite de velocidade: ");
    scanf("%d", &limiteDeVelocidade);
    printf("Insira o valor da multa: ");
    scanf("%f", &multaFixa);
    printf("Insira o valor da multa adicional: ");
    scanf("%f", &multaAdicional);
    printf("Insira a velocidade captada pelo radar: ");
    scanf("%d", &velocidadeCaptada);

    float multaTotal = 0;
    if (velocidadeCaptada > limiteDeVelocidade){
        multaTotal = multaFixa + multaAdicional*(velocidadeCaptada-limiteDeVelocidade);
    }

    printf("%.2f", multaTotal);

    return 0;
}
