#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){
    char heli[32];
    fgets(heli, 32, stdin);
    printf("%s",heli);
    int len = strlen(heli);
    char compHeli[32] = "";
    for (int i = 0; i < len-1; i++){
        char atual = heli[i];
        char* comp;
        if(atual == 'T'){
            comp = "A";
        }else if(atual == 'A'){
            comp = "T";
        }else if (atual == 'C'){
            comp = "G";
        }else{
            comp = "C";
        }
        strcat(compHeli, comp);
    }
    printf("%s", compHeli);   
    return 0;
}