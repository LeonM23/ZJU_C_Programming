#include <stdio.h>
#include <string.h>

int main(){
    char *str = "I Love GPLT";

    for (int i = 0; i < strlen(str); ++i){
        printf("%c\n", str[i]);
    }    
    
    return 0;
}
