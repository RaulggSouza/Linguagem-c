#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]){
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);
    int c;
    scanf("%d", &c);

    float delta = pow(b,2) - (4*a*c);

    if (delta >= 0){
        float x1 = (-b + sqrt(delta))/2;
        float x2 = (-b - sqrt(delta))/2;
        float soma = x1+x2;
        printf("%.2f", soma);
    }else{
        double valor_nan = nan("");
        if (isnan(valor_nan)){
            printf("NaN");
        }
    }

    return 0;
}

