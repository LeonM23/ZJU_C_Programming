#include <stdio.h>

int main(){

    int n, odd = 0, even = 0;
    scanf("%d", &n);
    while (n != -1){
        if (n % 2 == 0){
            even++;
        } else {
            odd++;
        }
        scanf("%d", &n);
    }
    printf("%d %d", odd, even);

    return 0;
}
