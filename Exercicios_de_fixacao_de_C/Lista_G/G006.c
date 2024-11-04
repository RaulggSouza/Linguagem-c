#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    char str[32];
    scanf("%s", &str);
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++){
        len++;
    }
    printf("%d", len);
    return 0;
}
