#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int A;
    scanf("%d",&A);
    int B;
    scanf("%d",&B);
    int aux;
    
    if(A > B){
        aux = A;
        A = B;
        B = aux;
    }

    printf("%d\n%d", A, B);

    return 0;
}
