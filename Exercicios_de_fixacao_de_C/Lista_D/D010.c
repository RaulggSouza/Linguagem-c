#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int* listA = (int*) malloc(sizeof(int)*n);
    int num;
    int* listB = (int*) malloc(sizeof(int)*n);
    int a = 0, b = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &num);
        if(num % 2 == 0){
            listA[a] = num;
            a++;
        }else{
            listB[b] = num;
            b++;
        }
    }
    for (int i = 0; i < a; i++){
        printf("%d ", listA[i]);
    }
    printf("\n");
    for (int i = 0; i < b; i++){
        printf("%d ", listB[i]);
    }
    free(listA);
    free(listB);
    return 0;
}
