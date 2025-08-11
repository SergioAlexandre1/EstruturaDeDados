#include <stdio.h>

int main(void){
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a = 0;         // armazenar os valores pares
    for (int i = 0; i < 10; i++){
        if(A[i] % 2 == 0){
            a++;
        }
    }
    printf("Quantidade de pares: %d\n", a);
    return 0;
}