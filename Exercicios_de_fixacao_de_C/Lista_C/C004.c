#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n;
    int m;
    int soma = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    for (int i = n; i <= m; i++){
        soma += i;
    }
    printf("%d", soma);
    return 0;
}
