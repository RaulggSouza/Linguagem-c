#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    printf("Calculadora de equacao de segundo grau: ax^2+bx+c\n");
    float a;
    float b;
    float c;

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    float delta = b*b - 4*a*c;
    float x1 = (-b + delta)/(2*a);
    float x2 = (-b - delta)/(2*a);

    printf("%.2f\n%.2f",x1,x2);
    return 0;
}