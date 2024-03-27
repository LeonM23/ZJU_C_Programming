#include <stdio.h>

int main(){

    int time, hour, minute;
    scanf("%d", &time);
    hour = time / 100;
    minute = time % 100;

    hour -= 8;
    if (hour < 0)
        hour += 24;
    
    printf("%d", 100 * hour + minute);

    return 0;
}
