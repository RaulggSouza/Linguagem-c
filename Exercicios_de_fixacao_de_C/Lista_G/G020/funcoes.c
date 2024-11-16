#include <stdio.h>
#include <stdlib.h>

int lenString(char* str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}