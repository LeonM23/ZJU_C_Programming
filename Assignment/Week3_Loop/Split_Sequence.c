#include <stdio.h>

int main(){

    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i += 2 ){
        printf("%d", i);
        if (num - i >= 2)
            printf(" ");
    }    

    return 0;
}
