#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    float n;
    scanf ("%f", &n);
    float harmonic = 0.00f;
    for (float f = 1; f <= n; f++){
        harmonic += 1/f;
    }
    printf("%.4f", harmonic);
    return 0;
}
