#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    float primeiraNota;
    float segundaNota;
    scanf("%f", &primeiraNota);
    scanf("%f", &segundaNota);
    float media = (primeiraNota+segundaNota)/2;
    printf("%.2f", media);
    return 0;
}
