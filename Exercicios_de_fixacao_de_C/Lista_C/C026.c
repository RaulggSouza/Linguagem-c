#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int mult = 0;
    int i = 0;
    int is_ana = 0;
    do{
        mult = i * (i+1) * (i+2);
        if (mult == n){
            is_ana = 1;
            break;
        }
        i++;
    }while (mult < n);
    if (is_ana){
        printf("S");
    }else{
        printf("N");
    }
    return 0;
}
