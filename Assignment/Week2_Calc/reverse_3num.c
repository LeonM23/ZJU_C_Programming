#include <stdio.h>

int main(){

    int i = 0;
    scanf("%d", &i);

    int i3, i2, i1;
    i3 = i / 100;
    i2 = i % 100 / 10;
    i1 = i % 10;

    printf("%d", i1 * 100 + i2 * 10 + i3);

    return 0;
}
