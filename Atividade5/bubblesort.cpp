#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[], int n)
{
    int i, j;
    char temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    char conjunto[100];
    printf("\n Digite um conjunto de caracteres: ");
    fgets(conjunto, sizeof(conjunto), stdin);

    int n = strlen(conjunto);

    if (n > 0 && conjunto[n - 1] == '\n')
    {
        conjunto[n - 1] = '\0';
        n--;
    }

    bubbleSort(conjunto, n);
    printf("\n Conjunto ordenado em ordem alfabetica: %s", conjunto);
}