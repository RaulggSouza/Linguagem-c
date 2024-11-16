#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int calculateFactorial(int n){
    int factorial = 1;
    for(int i = n; i > 0; i--){
        factorial *= i;
    }
    return factorial;
}

int sumFactorial(int n){
    int sum = 0;
    for (int i = 0; i <= n; i++){
        sum += calculateFactorial(i);
    }
    return sum;
}