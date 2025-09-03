#include <stdio.h>

void imprimirVetor(int *v, int n){
    printf("Vetor: |");
    for(int i = 0; i < n; i++){
        printf("%d |", v[i]);
    }
}

void bubbleSort(int *v, int n){
    int ordenado = 0;
    int ciclos = 0;
    int aux;
    do{
        for(int i = 0; i < n; i++){
            ciclos += 1;
            printf("Ciclos: %d\n", ciclos);
            if(v[i] < v[i + 1]){
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
            }
        }
    }while(ordenado);
}

int main()
{
    int A[10] = {6, 10, 42, 52, 31, 7, 12, 35, 90, 5};
    imprimirVetor(A, 10);
    bubbleSort(A, 10);
    imprimirVetor(A, 10);
    return 0;
}