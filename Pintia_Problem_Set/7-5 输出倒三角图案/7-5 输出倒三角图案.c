#include <stdio.h>

int main(){
    int height;
    scanf("%d", &height);

    height = height / 30.48 * 12;
    printf("%d %d", height / 12, height % 12);

    return 0;
}
