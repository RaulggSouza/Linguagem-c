#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int* bin = (int*) malloc(sizeof(int)*64);
    int i = 0;
    while (1){
        bin[i] = n%2;
        n/=2;
        i++;
        if (n == 1 || n == 0){
            break;
        }
    }
    bin[i] = n;
    for (int j = i; j >= 0; j--){
        printf("%d", bin[j]);
    }
    free(bin);
    return 0;
}