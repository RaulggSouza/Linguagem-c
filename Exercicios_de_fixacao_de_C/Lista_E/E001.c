#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){
    char str[32];
    fgets(str, 32, stdin);
    str[strlen(str)-1] = '\0';
    for (int i = 0; str[i] != '\0'; i++){
        printf("%c ", str[i]);
    }
    return 0;
}
