#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    printf("Inverter numero:\n");
    int num;
    printf("Digite um numero de quatro digitos: ");
    scanf("%d", &num);
    int primeiro_digito = num/1000;
    num -= primeiro_digito*1000;
    int segundo_digito = num/100;
    num -= segundo_digito*100;
    int terceiro_digito = num/10;
    int quarto_digito = num-(terceiro_digito*10);
    printf("%d%d%d%d",quarto_digito, terceiro_digito, segundo_digito, primeiro_digito);
    return 1;
}
