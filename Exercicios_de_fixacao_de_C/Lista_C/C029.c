#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int numero_incial = n;
    int num = n;
    int divisor = 1;
    int inverso = 0;
    int divisor_inverso = 1;
    while (true){
        if (num >= 10){
            num /= 10;
            divisor *= 10;
        }else{
            inverso += num*divisor_inverso;
            n -= divisor*num;
            num = n;
            divisor = 1;
            divisor_inverso *= 10;
        }
        if (num == 0){
            break;
        }
    }
    if(numero_incial == inverso){
        printf("S");
    }else{
        printf("N");
    }
    return 0;
}
