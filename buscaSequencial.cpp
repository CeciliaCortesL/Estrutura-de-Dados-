#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int vet[15], i, n;

    srand(time(NULL));

    for (i = 0; i < 15; i++){
        vet[i] = rand() % 100;

    }
    printf("Vetor gerado: \n");
    for (i = 0; i < 15; i++){
        printf("%d ", vet[i]);
    }
    printf(" \n Qual valor deseja buscar: ");
    scanf("%d", &n);

    for (i = 0; i < 15; i++){
        if (vet[i] == n){
            printf("\n %d ocorre na posicao %d do vetor", n, i);
        }
    }
}