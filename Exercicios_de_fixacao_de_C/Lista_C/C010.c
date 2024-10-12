#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b){
    if (a == 0){
        return b;
    }else if (b == 0){
        return a;
    }
    return (mdc(b,(a%b)));
}

int main(int argc, char const *argv[]){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d",mdc(a,b));
    return 0;
}
