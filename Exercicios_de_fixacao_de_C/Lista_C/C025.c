#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int is_equal = 1;
    int is_crescente = 1;
    int is_decrescente = 1;
    int num;
    int pre;
    scanf("%d", &pre);
    for (int i = 0; i < n-1; i++){
        scanf("%d", &num);
        if (num != pre){
            is_equal = 0;
            if (!is_decrescente && !is_crescente){
                break;
            }else if (pre < num){
                is_decrescente = 0;
            }else if (pre > num){
                is_crescente = 0;
            }
        }
        pre = num;
    }
    if (is_crescente || is_equal){
        printf("%d", 1);
    }else if (is_decrescente){
        printf("%d", -1);
    }else{
        printf("%d", 0);
    }
    
    return 0;
}
