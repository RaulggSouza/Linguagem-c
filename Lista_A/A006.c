#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    float totalCompra;
    float porcentagemDeDesconto;
    printf("Total da compra: ");
    scanf("%f", &totalCompra);
    printf("Porcentagem de desconto: ");
    scanf("%f", &porcentagemDeDesconto);

    float precoFinal = totalCompra*(1-porcentagemDeDesconto/100);
    printf("%.2f", precoFinal);

    return 0;
}
