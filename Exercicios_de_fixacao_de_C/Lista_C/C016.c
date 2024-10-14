#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int soma_primo = 0;
    int contador;
    int primo;
    for (int i = n; i > 1; i--){
        contador = 0;
        primo = 1;
        for(int j = i; j > 0; j--){
            if (i%j == 0){
                contador++;
                if (contador > 2){
                    primo = 0;
                    break;
                }
            }
        }
        if (primo){
            soma_primo += i;
        }
    }
    printf("%d", soma_primo);
    return 0;
}
