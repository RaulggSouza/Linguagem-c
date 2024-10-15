#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){
    char strA[32];
    fgets(strA, 32, stdin);
    char strB[32];
    fgets(strB, 32, stdin);
    int tamA = strlen(strA);
    int tamB = strlen(strB);
    strA[tamA-1] = '\0';
    strB[tamB-1] = '\0';
    int is_anagram = 1;
    int* contA = 0;
    int* contB = 0;
    if(tamA == tamB){
        for (int i = 0; strA[i] != '\0'; i++){
            contA = 0, contB = 0;
            for(int j = 0; strB[j] != '\0'; j++){
                if (strA[i] == strA[j]){
                    contA++;
                }
                if (strA[i] == strB[j]){
                    contB++;
                }
            }
            if (contA != contB){
                is_anagram = 0;
                break;
            }
        }
    }else{
        is_anagram = 0;
    }
    printf("%d", is_anagram);
    return 0;
}