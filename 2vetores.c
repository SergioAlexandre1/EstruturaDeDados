#include <stdio.h>

int main()
{
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int B[10] = {2, 5, 11, 7, 9, 25, 5345, 63, 10, 1};
    int C[10];
    int k = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(A[i] == B[j]){
                C[k] = A[i];
                k++;
                break;
            }
        }
    }
    printf("Interseção:\n");
    for(int i = 0; i < k; i++) {
        printf("%d\n", C[i]);
    }
}