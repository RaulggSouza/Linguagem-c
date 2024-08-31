#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    printf("Pintura de parede: \n");
    float largura;
    float altura;
    float metros_quadrados_lata;
    float custo_lata_tinta;
    int latas_tinta = 0;

    printf("Digite a largura da parede: ");
    scanf("%f",&largura);
    printf("Digite a altura da parede: ");
    scanf("%f",&altura);
    printf("Digite o custo da lata de tinta: ");
    scanf("%f",&custo_lata_tinta);
    printf("Digite quantos metros quadrados uma lata de tinda pinta: ");
    scanf("%f",&metros_quadrados_lata);

    float tamanho_parede = largura*altura;
    while (tamanho_parede > 0){
        tamanho_parede -= metros_quadrados_lata;
        latas_tinta++;
    }
    float custo_total = custo_lata_tinta*latas_tinta;
    printf("%d\n%.2f", latas_tinta, custo_total);
    return 0;
}
