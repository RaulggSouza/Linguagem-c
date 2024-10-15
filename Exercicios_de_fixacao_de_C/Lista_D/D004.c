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
    int x;
    scanf("%d", &x);
    int pos = -1;
    for (int i = 0; i < n; i++){
        if (list[i] == x){
            pos = i;
            break;
        }
    }
    printf("%d", pos);
    return 0;
}
