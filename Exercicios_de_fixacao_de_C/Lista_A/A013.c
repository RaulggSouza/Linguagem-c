#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    printf("Segundos em dias, horas, minutos e segundos\n");
    int segundos_totais;
    printf("Digite quantos segundos totais serao convertidos: ");
    scanf("%d", &segundos_totais);
    int dias = segundos_totais / 86400;
    segundos_totais %= 86400;
    int horas = segundos_totais / 3600;
    segundos_totais %= 3600;
    int minutos = segundos_totais / 60;
    segundos_totais %= 60;
    printf("%d %d %d %d", dias, horas, minutos, segundos_totais);
    return 0;
}