#include <stdio.h>
#define N 5

int main (){
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}