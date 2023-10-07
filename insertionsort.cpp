#include <stdio.h>

void insertionSort (int array[], int tamanho){
    int i, chave, j;
    for (i = 1; i < tamanho; i++){
        chave = array[i];
        j = i - 1;

        while(j >= 0 && array[j] > chave){
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = chave;
    }
}

int main(void){
    int numeros[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    printf("\n Array antes da ordenacao: ");
    for (int i = 0; i < tamanho; i++){
        printf("\n %d ", numeros[i]);
    }
    insertionSort(numeros, tamanho);

    printf("\n Array depois da ordenacao: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n %d ", numeros[i]);
    }
}