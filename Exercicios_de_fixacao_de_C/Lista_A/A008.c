#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]){
    printf("Calculadora de Hipotenusa:\n");
    float catAdjascente;
    float catOposto;
    printf("Digite o valor do cateto adjascente: ");
    scanf("%f", &catAdjascente);
    printf("Digite o valor do cateto oposto: ");
    scanf("%f", &catOposto);
    float hipotenusa = pow(catAdjascente,2)+pow(catOposto,2);
    hipotenusa = sqrt(hipotenusa);
    printf("%.2f",hipotenusa);
    return 0;
}
