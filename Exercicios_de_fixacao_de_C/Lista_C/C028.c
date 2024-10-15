#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    int seq;
    int max = 1;
    int max_seq;
    int pre;
    for (int i = 0; i < n-1; i++){
        scanf("%d", &seq);
        if(pre <= seq){
            max++;
        }else{
            max_seq = max;
            max = 1;
        }
        pre = seq;
    }
    printf("%d", max_seq);
    return 0;
}
