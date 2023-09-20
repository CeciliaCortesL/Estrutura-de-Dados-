#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quiskSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quiskSort(arr, low, pi - 1);
        quiskSort(arr, pi + 1, high);
    }
}

int main(void)
{
    int linhas, cols;

    printf("\n Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("\n Digite o numero de colunas da matriz: ");
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

    int totalElementos = linhas * cols;
    int arr[totalElementos];
    int index = 0;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[index++] = matrix[i][j];
        }
    }
    quiskSort(arr, 0, totalElementos - 1);

    index = 0;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = arr[index++];
        }
    }

    printf("\n Matriz ordenada: ");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("\n %d ", matrix[i][j]);
        }
        printf("\n");
    }
}