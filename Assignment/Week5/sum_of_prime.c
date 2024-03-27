#include <stdio.h>

int main(){

    int m, n;
    int sum = 0, count = 0, num = 2;
    scanf("%d %d", &m, &n);
    while (count < n){
        int is_prime = 1;
        for (int i = 2; i < num; ++i){
            if (num % i == 0){
                is_prime = 0;
                break;
            }
        }
        if (is_prime){
            ++count;
            if (count >= m){
                sum += num;
            }
        }
        ++num;
    }
    printf("%d", sum);

    return 0;
}
