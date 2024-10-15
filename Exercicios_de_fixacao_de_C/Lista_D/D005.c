#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int* list = (int*) malloc(sizeof(int)*n);
    int num;
    for (int i = 0; i < n; i++){
        scanf("%d", &num);
        list[i] = num;
    }
    int x;
    scanf("%d", &x);
    int contador = 0;
    for (int i = 0; i < n; i++){
        if (x == list[i]){
            contador++;
        }
    }
    printf("%d", contador);

    return 0;
}
