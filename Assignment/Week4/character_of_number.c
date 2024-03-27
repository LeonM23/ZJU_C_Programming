#include <stdio.h>

int main(){

    int n;
    int digit = 0, pos = 0, mul = 1, output = 0;
    scanf("%d", &n);
    while (n > 0){
        digit = n % 10;
        n /= 10;
        ++pos;
        if (digit % 2 == pos % 2){
            output += mul;
        }
        mul *= 2;
    }
    printf("%d", output);

    return 0;
}
