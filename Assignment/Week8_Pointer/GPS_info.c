#include <stdio.h>
#include <string.h>

int main(){

    char info[200] = {0};
    char *header[14];
    int header_cnt = 0;
    int aster_idx = 0;

    char hex_string[3];    
    char correct[20] = {0};
    char valid = 0;
    int i = 0;

    scanf("%s", info);
    while (strcmp(info, "END")){
        valid = info[1];
        header[header_cnt++] = &info[0];
        for (i = 2; info[i] != '*'; ++i){
            valid ^= info[i];
            if (info[i-1] == ','){
                header[header_cnt++] = &info[i];
            }
            aster_idx = i;
        }
        aster_idx += 2;

        sprintf(hex_string, "%X", valid);
        if (strcmp(hex_string, &info[aster_idx]) == 0){
            strncpy(correct, header[1], 8);
        }

    //$GPRMC,024813.640,A,3158.4608,N,11848.3737,E,10.05,324.27,150706,,,A*50

        scanf("%s", info);
    }
    
    int hour = (correct[0] - '0') * 10 + correct[1] - '0' + 8;
    hour %= 24;
    int min = (correct[2] - '0') * 10 + correct[3] - '0'; 
    int sec = (correct[4] - '0') * 10 + correct[5] - '0'; 

    printf("%02d:%d:%d", hour, min, sec);

    return 0;
}
