#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){
    char str[32];
    fgets(str, 32, stdin);
    int len = strlen(str);
    str[len-1] = '\0'; 
    char vowels[5] = {'a','e','i','o','u',};
    int count = 0;
    int is_vowel = 0;
    for (int i = 0; i < len-1; i++){
        for (int j = 0; j < 5; j++){
            if (is_vowel){
                break;
            }
            if(str[i] == vowels[j] || str[i] == ' '){
                is_vowel = 1;
            }
        }
        if (!is_vowel){
            count++;
        }
        is_vowel = 0;
    }
    printf("%d", count);
    return 0;
}
