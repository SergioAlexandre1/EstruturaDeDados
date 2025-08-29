#include <stdio.h>

void imprimirVet(int *v, int n){
    printf("\nVetor: |");
    for(int i = 0; i < n; i++){
        printf("%d |", v[i]);
    }
}

int SelectionSortIt(int v[], int tamanho){
    int min = v[0];
    int aux;
    for(int i = 0; i < (tamanho - 1); i++){ // percorre o vetor inteiro
        min = i;
        for(int j = i + 1; j < tamanho; j++){ // percorre do i até o final
            if(v[j] < v[min]){ // verifica se achou um menor que o atual
                min = j; // atualiza o menor
            }
        }
        if(i != min){ // se achou um menor que o lugar que estou, eu troco
            aux = v[i];
            v[i] = v[min];
            v[min] = aux;
        }
    }
}


int main()
{
    int A[5] = {2, 1, 5, 3, 4};
    SelectionSortIt(A, 5);
    imprimirVet(A, 5);
    return 0;
}