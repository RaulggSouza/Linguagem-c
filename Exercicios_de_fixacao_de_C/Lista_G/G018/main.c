#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int sum = sumFactorial(n);
    printf("%d", sum);
    return 0;
}
