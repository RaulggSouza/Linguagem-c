#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int maior = 0;
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        if (x > maior){
            maior = x;
        }
    }
    printf("%d", maior);
    return 0;
}
