#include <stdio.h>

void insertionSortDescending(int arr[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}

int main(void)
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("\n Array antes da ordenacao: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    insertionSortDescending(arr, n);

    printf("\n Array depois da ordenacao (ordem decrescente)");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}