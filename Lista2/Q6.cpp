#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int buscaSequencial(int matriz[][MAX_COLS], int rows, int cols, int valor, int *row, int *col)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matriz[i][j] == valor)
            {
                *row = i;
                *col = j;
                return 1;
            }
        }
    }
    return 0;
}

int main(void)
{
    int rows, cols;

    printf("\n Digite o numero de linhas da matriz: ");
    scanf("%d", &rows);

    printf("\n Digite o numero de colunas da matriz: ");
    scanf("%d", &cols);

    int matriz[MAX_ROWS][MAX_COLS];

    printf("\n Digite os elementos da matriz: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    int valorProcurado;
    printf("\n Digite o valor a ser procurado: ");
    scanf("%d", &valorProcurado);

    int row, col;
    int resultado = buscaSequencial(matriz, rows, cols, valorProcurado, &row, &col);

    if (resultado)
    {
        printf("\n O valor %d foi encontrado na posicao (%d, %d) ", valorProcurado, row, col);
    }
    else
    {
        printf("\n O valor %d nao foi encontrado na matriz ", valorProcurado);
    }
}
