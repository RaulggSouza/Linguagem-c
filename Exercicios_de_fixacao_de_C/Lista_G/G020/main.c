#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main(int argc, char const *argv[]){
    char s[100];
    scanf("%s", s);
    int len = lenString(s);
    printf("%d", len);
    return 0;
}
