#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int* listA = (int*) malloc(sizeof(int)*n);
    int* listB = (int*) malloc(sizeof(int)*n);
    int num;
    for (int i = 0; i < n; i++){
        scanf("%d", &num);
        listA[i] = num;
    }
    for (int i = 0; i < n; i++){
        scanf("%d", &num);
        listB[i] = num;
    }
    for (int i = 0; i < n; i++){
        printf("%d %d ",listA[i], listB[i]);
    }
    free(listA);
    free(listB);
    return 0;
}
