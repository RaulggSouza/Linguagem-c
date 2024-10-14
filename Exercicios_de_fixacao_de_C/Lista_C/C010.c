#include <stdio.h>
#include <stdlib.h>

/* Recursividade
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
*/

int main(int argc, char const *argv[]){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    int r;
    int mdc;
    while(a > 0 && b > 0){
        r = a%b;
        a = b;
        b = r;
        if (b == 0){
            mdc = a;
        }else{
            mdc = b;
        }
    }
    printf("%d",mdc);
    return 0;
}
