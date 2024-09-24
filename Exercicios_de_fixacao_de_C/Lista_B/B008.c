#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int A;
    scanf("%d",&A);
    int B;
    scanf("%d",&B);
    int C;
    scanf("%d",&C);
    int maior;

    if(A > B && A > C){
        maior = A;
    }else if (B > A && B > C){
        maior = B;
    }else if (C > A && C > B){
        maior = C;
    }

    printf("%d", maior);
    return 0;
}
