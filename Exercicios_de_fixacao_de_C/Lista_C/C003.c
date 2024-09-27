#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);
    int i;
    if (x < y){
        for (i = x; i <= y; i++){
            printf("%d\n", i);
        }
        for (i = y; i >= x; i--){
            printf("%d\n", i);
        }
    }else{
        printf("INVALIDO");
    }
    return 0;
}
