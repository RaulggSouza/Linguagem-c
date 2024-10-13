#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int x1;
    scanf("%d", &x1);
    int v1;
    scanf("%d", &v1);
    int x2;
    scanf("%d", &x2);
    int v2;
    scanf("%d", &v2);
    
    if(x1 < x2 && v1 > v2 || x1 > x2 && v1 < v2){
        printf("SIM");
    }else{
        printf("NAO");
    }
    return 0;
}
