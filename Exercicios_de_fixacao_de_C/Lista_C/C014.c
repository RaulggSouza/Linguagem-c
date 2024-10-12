#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int dinheiro;
    scanf("%d",&dinheiro);
    int preco_chocolate;
    scanf("%d",&preco_chocolate);
    int embalagens_extra;
    scanf("%d",&embalagens_extra);

    int chocolates = dinheiro/preco_chocolate;
    chocolates += chocolates/embalagens_extra;
    printf("%d", chocolates);
    return 0;
}
