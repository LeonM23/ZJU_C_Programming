#include <stdio.h>

int main(){

    int poly, param;
    scanf("%d", &poly);
    scanf("%d", &param);
    int max_poly = poly;
    int cnt_zero = 2;
    if (poly == 0){
        --cnt_zero;
    }     

    int poly_arr[poly+1];
    for (int i = 0; i <= poly; ++i){
        poly_arr[i] = 0;
    }
    poly_arr[poly] += param;

    while(cnt_zero > 0){
        scanf("%d", &poly);
        scanf("%d", &param);
        poly_arr[poly] += param;
        if (poly == 0){
            --cnt_zero;
        }
    }

    for (; max_poly > 0; --max_poly){
        if (poly_arr[max_poly] != 0){
            break;
        }
    }

    if (max_poly == 0){
        printf("%d", poly_arr[0]);
    } else{
        int num = 0;
        for (int poly = max_poly; poly >= 0; --poly){
            num = poly_arr[poly];
            if (num == 0){
                continue;
            }

            if (poly == max_poly){
                if (num == -1){
                    printf("-");
                } else if (num != 1){
                    printf("%d", num);
                }
            }else if (poly == 0){
                if (num >= 0){
                    printf("+%d", num);
                } else{
                    printf("%d", num);
                }
            } else {
                if (num == 1){
                    printf("+");
                }else if (num == -1){
                    printf("-");
                } else if (num > 0){
                    printf("+%d", num);
                } else{
                    printf("%d", num);
                }
            }

            switch (poly)
            {
                case 0:
                    break;
                case 1:
                    printf("x");
                    break;
                default:
                    printf("x%d", poly);
            }
        }
    }
    return 0;
}
