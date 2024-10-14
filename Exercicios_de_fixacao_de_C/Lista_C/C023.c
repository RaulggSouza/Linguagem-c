#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int idade;
    scanf("%d", &idade);
    int maior = 0;
    int vela;
    int maiores = 0;
    for (int i = 0; i < idade; i++){
        scanf("%d", &vela);
        if (vela > maior){
            maior = vela;
            maiores = 1;
        }else if(vela == maior){
            maiores++;
        }
    }
    printf("%d", maiores);
    return 0;
}
