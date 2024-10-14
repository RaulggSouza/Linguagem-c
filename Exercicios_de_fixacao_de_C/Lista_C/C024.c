#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d",&n);
    int maior1 = 0;
    int maior2 = 0;
    int num;
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        if (num > maior2){
            maior2 = num;
            if (num > maior1){
                maior2 = maior1;
                maior1 = num;
            }
        }
    }
    printf("%d\n%d", maior1, maior2);
    return 0;
}
