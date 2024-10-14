#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]){
    int base;
    scanf("%d", &base);
    int expo;
    scanf("%d", &expo);
    int pot = 1;
    //2³ = 2*2*2
    for(int i = 1; i <= expo; i++){
        pot *= base;
    }
    printf("%d", pot);
    return 0;
}
