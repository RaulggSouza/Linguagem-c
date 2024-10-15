#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int* vetA = (int*) malloc(sizeof(int)*n);
    int num;
    for (int i = 0; i < n; i++){
        scanf("%d", &num);
        vetA[i] = num;
    }
    int x;
    int* vetB = (int*) malloc(sizeof(int)*n);
    int b = 0;
    scanf("%d", &x);
    for (int i = 0; i < n; i++){
        if (vetA[i] > x){
            vetB[b] = vetA[i];
            b++;
        }
    }
    for(int i = 0; i < b; i++){
        printf("%d ", vetB[i]);
    }
    return 0;
}
