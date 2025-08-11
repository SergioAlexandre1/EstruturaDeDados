#include <stdio.h>
#include <limits.h>

int main()
{
    int x;
    int menor = INT_MAX;
    int maior = INT_MIN;
    printf("Digite um número: ");
    scanf("%d", &x);
    while(x >= 0){
        if(x < menor){
            menor = x;
        }
        if(x > maior){
            maior = x;
        }
        printf("Digite um número: ");
        scanf("%d", &x);
    }
    printf("Maior digitado: %d", maior);
    printf("\nMenor digitado: %d", menor);
}