#include <stdio.h>

void imprimirVetor(int *v, int n){
    printf("Vetor: |");
    for(int i = 0; i < n; i++){
        printf("%d |", v[i]);
    }
}

int buscaBinaria(int *v, int n, int elem){
    int inicio, meio, final;
    inicio = 0;
    final = n - 1;
    
    while(inicio <= final){
        meio = (inicio + final)/2;
        if(v[meio] == elem){
            printf("\nResultado Busca Binaria: %d", meio);
            return meio;
        }else{
            if(v[meio] < elem){
                inicio = meio + 1;
            }else{
                final = meio - 1;
            }
        }
    }
    printf("\nResultado Busca Binaria: falhou. ");
    return -1;
}

int main()
{
    int vetor[10] = {-8, -5, 1, 4, 14, 21, 23, 54, 67, 90};
    imprimirVetor(vetor, 10);
    buscaBinaria(vetor, 10, 53);

    return 0;
}