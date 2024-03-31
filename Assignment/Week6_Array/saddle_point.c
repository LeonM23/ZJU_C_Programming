#include <stdio.h>
#include <stdbool.h>

int main(){
    int ndim = 0;
    scanf("%d", &ndim);

    int A[ndim][ndim];
    for (int i = 0; i < ndim; ++i){
        for (int j = 0; j < ndim; ++j){
            scanf("%d", &A[i][j]);
        }
    }
    int rowmax[ndim];
    int colmin[ndim];

    for (int i = 0; i < ndim; ++i){
        rowmax[i] = 0;
        for (int j = 1; j < ndim; ++j){
            if (A[i][j] > A[i][rowmax[i]]){
                rowmax[i] = j;
            }
        }
    }

    for (int j = 0; j < ndim; ++j){
        colmin[j] = 0;
        for (int i = 1; i < ndim; ++i){
            if (A[i][j] < A[colmin[j]][j]){
                colmin[j] = i;
            }
        }
    }

    bool found = false;
    for (int i = 0; i < ndim; ++i){
        if (colmin[rowmax[i]] == i){
            printf("%d %d\n", i, rowmax[i]);
            found = true;
        }
    }
    if (!found){
        printf("NO");
    }

    return 0;
}
