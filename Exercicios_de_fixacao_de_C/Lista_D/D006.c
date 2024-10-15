#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int* list = (int*) malloc(sizeof(int)*n);
    int num;
    for (int i = 0; i < n; i++){
        scanf("%d", &num);
        list[i] = num;
    }
    for (int i = n-1; i >= 0; i--){
        printf("%d ", list[i]);
    }
    free(list);
    return 0;
}
