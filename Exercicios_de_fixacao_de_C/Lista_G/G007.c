#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){
    char str[32];
    fgets(str, 32, stdin);
    int len = strlen(str);
    char vowels[5] = {'a','e','i','o','u'};
    int count = 0;
    for (int i = 0; i < len-1; i++){
        for (int j = 0; j < 5; j++){
            if(str[i] == vowels[j]){
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}
