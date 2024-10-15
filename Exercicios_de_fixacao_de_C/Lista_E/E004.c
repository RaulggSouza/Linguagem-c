#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[32];
    fgets(str, 32, stdin);
    str[strlen(str)-1] = '\0';
    int tamanho = strlen(str) - 1;
    int is_palindrome = 1;
    for (int i = 0, j = tamanho; i < j; i++, j--){
        if (str[i] != str[j]){
            is_palindrome = 0;
            break;
        }
    }
    printf("%d", is_palindrome);
    return 0;
}
