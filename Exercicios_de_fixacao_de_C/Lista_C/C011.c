#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]){
    int x;
    scanf("%d", &x);
    int contador = 0;
    while(true){
        int y;
        scanf("%d", &y);
        if (y < 0){
            break;
        }else if (x == y){
            contador++;
        }
    }
    printf("%d", contador);
    return 0;
}
