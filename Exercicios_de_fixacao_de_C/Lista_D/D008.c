#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int* listA = (int*) malloc(sizeof(int)*n);
    int num;
    for (int i = 0; i < n; i++){
        scanf("%d", &num);
        listA[i] = num;
    }
    int* listB = (int*) malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++){
        scanf("%d", &num);
        listB[i] = num;
    }
    int* listC = (int*) malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++){
        listC[i] = listA[i] + listB[i];
    }
    for(int i = 0; i < n; i++){
        printf("%d ", listC[i]);
    }
    return 0;
}
