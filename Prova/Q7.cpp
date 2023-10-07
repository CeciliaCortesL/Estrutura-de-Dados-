#include <stdio.h>

void insertionSort(int arr[], int size) {
    int i, j, chave;
    for (i = 1; i < size; i++) {
        chave = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = chave;
    }
}

int main(void) {
    int matriz[4][4] = {
        {45, 32, 83, 95},
        {26, 14, 37, 42},
        {40, 43, 65, 77},
        {74, 79, 48, 55}
    };

    int i, j;

    for (i = 0; i < 4; i++) {
        insertionSort(matriz[i], 4);
    }

    
    printf("Matriz depois da ordenacao: ");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

   
}
