#include <stdio.h>
#include <stdlib.h>

int is_primo(int n){
    int contador = 0;
    for(int i = n; i > 0; i--){
        if (n%i == 0){
            contador++;
            if (contador > 2){
                return 0;
            }
        }
    }
    return 1;
}

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int soma_primo = 0;
    for (int i = n; i > 1; i--){
        if (is_primo(i)){
            soma_primo += i;
        }
    }
    printf("%d", soma_primo);
    return 0;
}
