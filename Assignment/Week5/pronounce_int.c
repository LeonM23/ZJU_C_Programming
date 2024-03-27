#include <stdio.h>

int main(){

    int num = 0, digit = 100000;
    scanf("%d", &num);

    if (num < 0){
        num = -num;
        printf("fu ");
    }

    if (num == 0) {
        printf("ling");
        return 0;
    } else{
        while (num / digit == 0){
            digit /= 10;
        }
        while (digit > 0){
            switch (num / digit){
            case 1:
                printf("yi");
                break;
            case 2:
                printf("er");
                break;
            case 3:
                printf("san");
                break;
            case 4:
                printf("si");
                break;
            case 5:
                printf("wu");
                break;
            case 6:
                printf("liu");
                break;
            case 7:
                printf("qi");
                break;
            case 8:
                printf("ba");
                break;
            case 9:
                printf("jiu");
                break;
            case 0:
                printf("ling");
                break;
            }
            num %= digit;
            digit /= 10;
            if (digit > 0){
                printf(" ");
            }
        }
    }

    return 0;
}
