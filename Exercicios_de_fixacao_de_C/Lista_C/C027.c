#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int num_perfeito = 0;
    for (int i = n-1 ; i > 0; i--){
        if (n % i == 0){
            num_perfeito += i;
        }
    }
    if (num_perfeito == n){
        printf("S");
    }else{
        printf("N");
    }
    return 0;
}
