#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    printf("Media de notas:\n");
    float primeiraNota;
    float segundaNota;
    printf("Insira a primeira nota: ");
    scanf("%f", &primeiraNota);
    printf("Insira a segunda nota: ");
    scanf("%f", &segundaNota);
    float media = (primeiraNota+segundaNota)/2;
    printf("%.2f", media);
    return 0;
}
