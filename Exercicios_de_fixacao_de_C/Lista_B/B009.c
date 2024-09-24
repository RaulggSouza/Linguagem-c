#include <stdio.h>
#include <stdlib.h>

int troca(int* val1, int* val2){
    int aux;
    aux = *val1;
    *val1 = *val2;
    *val2 = aux;
}

int main(int argc, char const *argv[]){
    int A;
    scanf("%d",&A);
    int B;
    scanf("%d",&B);
    int C;
    scanf("%d",&C);
    
    if(A > B){
        troca(&A, &B);
    }
    if(A > C){
        troca(&A, &C);
    }
    if(B > C){
        troca(&B, &C);
    }

    printf("%d\n%d\n%d", A, B, C);

    return 0;
}
