#include <stdio.h>
#include <stdlib.h>

int* makeFrames(int* size){
    int* vet = (int*) malloc(sizeof(int)*(*size));
    for (int i = 0; i < (*size); i++){
        int ball;
        scanf("%d", &ball);
        vet[i] = ball;
        if (ball == 10 && i < (*size)-3){
            (*size)--;
        }
        if (i == (*size)-2 && ball != 10){
            if (vet[i] + vet[i-1] < 10){
                (*size)--;
            }
        }
    }
    return vet;
}

void printNormalFrame(int* game, int i, int* is_first, int* frame, int* rounds_played){
    if (game[i] < 10){
        if (*is_first){
            *frame = game[i];
            printf("%d ", game[i]);
            *is_first = 0;
        } else {
            *frame += game[i];
            if (*frame == 10){
                printf("/ | ");    
            } else {
                printf("%d | ", game[i]);
            }
            *is_first = 1;
            *rounds_played++;
        }
    }else{
        printf("X _ | ");
        *rounds_played++;
    }
}

void printLastFrame(int* game, int i, int* is_first, int* frame, int* rounds_played){
    if (game[i] < 10){
        if (*is_first){
            *frame = game[i];
            printf("%d ", game[i]);
            *is_first = 0;
        } else {
            *frame += game[i];
            if (*frame == 10){
                printf("/ ");    
            } else {
                printf("%d ", game[i]);
            }
            *is_first = 1;
            *rounds_played++;
        }
    }else{
        printf("X ");
        *rounds_played++;
    }
}

int main(int argc, char const *argv[]){
    int size = 21;
    int* game = makeFrames(&size);
    int frame = 0, final_pontuation = 0, is_first = 1, rounds_played = 1;
    printf("\n");
    for(int i = 0; i < size; i++){
        if (rounds_played <= 9){
            printNormalFrame(game, i, &is_first, &frame, &rounds_played);
        }else{
            printLastFrame(game, i, &is_first, &frame, &rounds_played);
        }
    }
    return 0;
}
