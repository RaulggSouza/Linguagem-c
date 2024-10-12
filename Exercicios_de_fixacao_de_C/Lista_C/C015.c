#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int contador = 0;
    int primo = 1;
    for(int i = n; i > 0; i--){
        if (n%i == 0){
            contador++;
            if (contador > 2){
                  primo = 0;
                break;
            }
        }
    }
    printf("%d",primo);
    return 0;
}
