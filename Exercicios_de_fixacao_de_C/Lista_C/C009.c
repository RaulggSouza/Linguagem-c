#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int pre = 0;
    int now = 1;
    int aux;
    int fib = 0;
    printf("1 ");
    for (int i = 1; i < n; i++){
        fib = pre + now;
        printf("%d ", fib);
        pre = now;
        now = fib;
    }
    return 0;
}
