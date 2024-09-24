#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int ano;
    scanf("%d", &ano);
    if (ano % 400 == 0){
        printf("1");
    }else if (ano % 4 == 0 && ano % 100 != 0){
        printf("1");
    }else if (ano < 0){
        printf("-1");
    }else{
        printf("0");
    }
    return 0;
}
