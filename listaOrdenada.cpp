#include <stdio.h>
#define MAX_TAMANHO 100

int inserirOrdenado(int lista[], int tamanho, int valor)
{
    if (tamanho >= MAX_TAMANHO)
    {
        printf("\n Lista cheia ");
        return tamanho;
    }
    int i;
    for (i = tamanho - 1; i >= 0 && lista[i] > valor; i--)
    {
        lista[i + 1] = lista[i];
    }
    lista[i + 1] = valor;
    return tamanho + 1;
}

void imprimirLista(int lista[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("\n %d", lista[i]);
    }
    printf("\n");
}

int main()
{
    int lista[MAX_TAMANHO];
    int tamanho = 0;
    int valor;

    printf("\n Insira elementos na lista (digite -1 para sair)");

    while (1)
    {
        printf("\n Digite um valor: ");
        scanf("%d", &valor);

        if (valor == -1)
        {
            break;
        }
        tamanho = inserirOrdenado(lista, tamanho, valor);
    }

    printf("\n Lista ordenada: ");
    imprimirLista(lista, tamanho);

    return 0;
}
