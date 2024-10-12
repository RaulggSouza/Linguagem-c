#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int soma = 0;
    int num = n;
    int divisor = 1;
    while (true){
        if (num >= 10){
            num /= 10;
            divisor *= 10;
        }else{
            soma += num; // 16
            n -= divisor*num;
            num = n;
            divisor = 1;
        }
        if (num == 0){
            break;
        }
    }
    printf("%d", soma);
    return 0;
}
