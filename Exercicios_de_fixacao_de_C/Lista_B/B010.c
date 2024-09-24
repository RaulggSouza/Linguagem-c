#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int A;
    scanf("%d",&A);
    int B;
    scanf("%d",&B);
    int C;
    scanf("%d",&C);

    if (A == B && B == C){
        printf("EQUILATERO");
    }else if (A+B < C || A+C < B || B+C < A){
        printf("INVALIDO");
    }else if (A != B && B != C){
        printf("ESCALENO");
    }else{
        printf("ISOCELES");
    }

    return 0;
}
