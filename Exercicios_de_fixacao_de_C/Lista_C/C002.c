#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x < y){
        for (int i = x; i <= y; i++){
            printf("%d\n", i);
        }
    }else{
        printf("INVALIDO");
    }
    return 0;
}
