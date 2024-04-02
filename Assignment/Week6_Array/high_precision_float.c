#include <stdio.h>

int main(){

    int digit[200], cnt = 0;
    int num, denom;
    scanf("%d/%d", &num, &denom);

    do{
        num *= 10;
        digit[cnt++] = num / denom;
        num %= denom;
    }while(num != 0 && cnt < 200);

    printf("0.");
    for (int i = 0; i < cnt; ++i){
        printf("%d", digit[i]);
    }
    printf("\n");

    return 0;
}

