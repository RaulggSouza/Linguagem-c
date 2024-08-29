#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    printf("Calculadora de IMC:\n");
    float massa;
    float altura;
    printf("Insira a massa em kg: ");
    scanf("%f", &massa);
    printf("Insira a altura em metros: ");
    scanf("%f", &altura);
    float imc = massa/(altura*altura);
    printf("%.2f", imc);
    return 0;
}
