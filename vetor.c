#include <stdio.h>

int main(void){
    int A[6] = {1, 0, 5, -2, -5, 7};
    int s = A[0] + A[1] + A[5];
    A[4] = 100;
    for(int i = 0; i < 6; i++){
        printf("%d\n", A[i]);
    }
    printf("%d", s);
}