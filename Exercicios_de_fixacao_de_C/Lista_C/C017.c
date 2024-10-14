#include <stdio.h>
#include <stdlib.h>
/* Recursividade
int fatorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    return n*fatorial(n-1);
}

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int soma_fatorial = 0;
    for (int i = n; i >= 0; i--){
        soma_fatorial += fatorial(i);
    }
    printf("%d", soma_fatorial);
    return 0;
}
*/

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int soma_fatorial = 0;
    int fatorial;
    for (int i = n; i > 0; i--){
        fatorial = i;
        for (int j = i-1; j > 0; j--){
            fatorial *= j;
        }
        soma_fatorial += fatorial;
    }
    soma_fatorial += 1; // fatorial de 0
    printf("%d", soma_fatorial);
    return 0;
}
