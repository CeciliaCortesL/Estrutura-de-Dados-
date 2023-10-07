#include <stdio.h>

void trocar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar(int array[], int baixo, int alto)
{
    int pivot = array[alto];
    int i = (baixo - 1);

    for (int j = baixo; j <= alto - 1; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            trocar(&array[i], &array[j]);
        }
    }
    trocar(&array[i + 1], &array[alto]);
    return (i + 1);
}

void quickSort(int array[], int baixo, int alto)
{
    if (baixo < alto)
    {
        int pi = particionar(array, baixo, alto);

        quickSort(array, baixo, pi - 1);
        quickSort(array, pi + 1, alto);
    }
}

int main(void)
{
    int numeros[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    printf("\n Array antes da ordenação: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n %d ", numeros[i]);
    }

    quickSort(numeros, 0, tamanho - 1);

    printf("\n Array depois da ordenação: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n %d ", numeros[i]);
    }
}