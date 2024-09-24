#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int limiteDeVelocidade;
    float multaFixa;
    float multaAdicional;
    int velocidadeCaptada;

    scanf("%d", &limiteDeVelocidade);
    scanf("%f", &multaFixa);
    scanf("%f", &multaAdicional);
    scanf("%d", &velocidadeCaptada);

    float multaTotal = 0;
    if (velocidadeCaptada > limiteDeVelocidade){
        multaTotal = multaFixa + multaAdicional*(velocidadeCaptada-limiteDeVelocidade);
    }

    printf("%.2f", multaTotal);

    return 0;
}
