#include <stdio.h>

void bubbleSort (int array[], int tamanho){
    int troca;
    for (int i = 0; i < tamanho - 1; i++){
        for (int j = 0; j < tamanho - i - 1; j++){
            if (array[j]> array[j + 1]){
                troca = array[j];
                array[j] = array[j + 1];
                array[j + 1] = troca;
            }
        }
    }
}

int main(void){
    int numeros[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    printf("\n Array antes da ordenacao: ");
    for (int i = 0; i < tamanho; i++){
        printf("\n %d ", numeros[i]);
    }
    bubbleSort(numeros, tamanho);

    printf("\n Array depois da ordenacao: ");
    for (int i = 0; i < tamanho; i++){
        printf("\n %d ", numeros[i]);
    }
}