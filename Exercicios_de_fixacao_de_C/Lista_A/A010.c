#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    printf("Conversao celsius para fahrenheit: \n");
    float celsius;
    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &celsius);
    float fahrenheit = celsius*1.8 + 32;
    printf("%.2f", fahrenheit);
    return 0;
}
