#include <stdio.h>
#include <stdbool.h>

int main(){

    char word[100];
    bool notend = true;    

    do{
        scanf("%s", word);
        for (int i = 0; i < 100; ++i){
            if (word[i] == '\0'){
                printf("%d ", i);
                break;
            } else if (word[i] == '.'){
                printf("%d", i);
                notend = false;
                break;
            }
        }
    }while(notend);

    return 0;
}
