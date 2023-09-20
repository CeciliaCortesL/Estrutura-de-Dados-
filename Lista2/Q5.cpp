#include <stdio.h>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(void)
{
    int linhas, cols;

    printf("\n Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &cols);

    int matrix[linhas][cols];

    printf("\n Digite os elementos da matriz: ");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < linhas; i++)
    {
        insertionSort(matrix[i], cols);
    }
    printf("\n Matriz ordenada: ");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}