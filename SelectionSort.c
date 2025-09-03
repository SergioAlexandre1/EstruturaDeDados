#include <stdio.h>

void imprimirVetor(int *v, int n){
    printf("Vetor: |");
    for(int i = 0; i < n; i++){
        printf("%d |", v[i]);
    }
}

void selectionSort(int *v, int n){
    int i, j, min, aux;
    int ciclos = 0;
    for(i = 0; i < n - 1; i++){
        min = i;
        ciclos += 1;
        printf("\nCiclos: %d\n", ciclos);
        for(j = i + 1; j < n; j++){
            if(v[j] < v[min]){
                min = j;
            }
        }
        if(i != min){
            aux = v[i];
            v[i] = v[min];
            v[min] = aux;
        }
    }
}

int main()
{
    int A[10] = {6, 10, 42, 52, 31, 7, 12, 35, 90, 5};
    imprimirVetor(A, 10);
    selectionSort(A, 10);
    imprimirVetor(A, 10);
    return 0;
}