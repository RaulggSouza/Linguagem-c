#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);
    int mult = 0;
    for (int i = 0; i < b; i++){
        mult += a;
    }
    printf("%d", mult);
    return 0;
}
