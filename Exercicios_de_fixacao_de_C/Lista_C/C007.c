#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    int power = 1;
    for (int i = 0; i < b; i++){
        power *= a;
    }
    printf("%d", power);    
    return 0;
}
