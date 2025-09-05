#include <stdio.h>

void imprimirVetor(int *v, int n){
    printf("Vetor: |");
    for(int i = 0; i < n; i++){
        printf("%d |", v[i]);
    }
    printf("\n");
}

void bubbleSort(int *v, int n){
    int sorted;
    int aux;
    int troca = 0;

    do {
        sorted = 1;
        for(int i = 0; i < n - 1; i++){
            if(v[i] > v[i + 1]){
                troca++;
                printf("Trocas: %d\n", troca);
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                sorted = 0;
            }
        }
    } while(sorted == 0);
}


void insertionSort(int *v, int n){
    int j, aux;
    for(int i = 1; i < n; i++){
        aux = v[i];
        for(j = i; (j > 0) && (aux < v[j - 1]); j--){
            v[j] = v[j - 1];
        }
        v[j] = aux;
    }
}

int main()
{
    int A[5] = {3, 5, 4, 1, 2};
    imprimirVetor(A, 5);
    bubbleSort(A, 5);
    imprimirVetor(A, 5);
    return 0;
}