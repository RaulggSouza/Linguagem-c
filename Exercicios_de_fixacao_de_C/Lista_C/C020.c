#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]){
    int idade;
    float soma_idades = 0.0f;
    int contador = 0;
    int maiores = 0;
    int idosas = 0;
    while (true){
        scanf("%d", &idade);
        if (idade < 0){
            break;
        }
        contador++;
        soma_idades += idade;
        if (idade >= 18){
            maiores++;
        }
        if (idade > 75){
            idosas++;
        }
    }
    float media = soma_idades/contador;
    float porcentagem_idosas = idosas * 100.0f / contador;
    printf("%.2f\n%d\n%.2f%%", media, maiores, porcentagem_idosas);
    return 0;
}
