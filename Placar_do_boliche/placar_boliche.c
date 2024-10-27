#include <stdio.h>
#include <stdlib.h>

int* coletarJogadas(int* size){
    int* vet = (int*) malloc(sizeof(int)*(*size));
    int has_strike = 0;
    for (int i = 0; i < (*size); i++){
        int jogada;
        scanf("%d", &jogada);
        vet[i] = jogada;
        if (jogada == 10 && i < (*size)-3){
            (*size)--;
            has_strike = 1;
        }
        if (i == (*size)-2 && jogada != 10){
            if (vet[i] + vet[i-1] < 10){
                (*size)--;
            }
        }
    }
    return vet;
}

int main(int argc, char const *argv[]){
    int size = 21;
    int* jogadas = coletarJogadas(&size);
    for(int i = 0; i < size; i++){
        printf("%d ", jogadas[i]);
    }
    int rodada = 0;
    int placarTotal = 0;
    int is_first = 1;
    int rodadas_jogadas = 1;
    printf("\n");
    for(int i = 0; i < size; i++){
        if (rodadas_jogadas <= 9){
            if (jogadas[i] < 10){
                if (is_first){
                    rodada = jogadas[i];
                    printf("%d ", jogadas[i]);
                    is_first = 0;
                } else {
                    rodada += jogadas[i];
                    placarTotal += rodada;
                    if (rodada == 10){
                        printf("/ | ");    
                    } else {
                        printf("%d | ", jogadas[i]);
                    }
                    is_first = 1;
                    rodadas_jogadas++;
                }
            }else if (jogadas[i] == 10){
                printf("X _ | ");
                placarTotal += 10;
                rodadas_jogadas++;
            }
        }else{
            if (jogadas[i] < 10){
                if (is_first){
                    rodada = jogadas[i];
                    printf("%d ", jogadas[i]);
                    is_first = 0;
                } else {
                    rodada += jogadas[i];
                    placarTotal += rodada;
                    if (rodada == 10){
                        printf("/ ");    
                    } else {
                        printf("%d ", jogadas[i]);
                    }
                    is_first = 1;
                    rodadas_jogadas++;
                }
            }else if (jogadas[i] == 10){
                printf("X ");
                placarTotal += 10;
                rodadas_jogadas++;
            }
        }
    }
    return 0;
}
