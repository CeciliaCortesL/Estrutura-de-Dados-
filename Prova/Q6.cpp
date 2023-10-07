#include <stdio.h>

int buscaSequencial(int matriz[][4], int linhas, int colunas, int valor, int *linha, int *coluna) {
    for (*linha = 0; *linha < linhas; (*linha)++) {
        for (*coluna = 0; *coluna < colunas; (*coluna)++) {
            if (matriz[*linha][*coluna] == valor) {
                return 1; 
            }
        }
    }
    return 0; 
}

int main(void) {
    int matriz[4][4] = {
        {45, 32, 83, 95},
        {26, 14, 37, 42},
        {40, 43, 65, 77},
        {74, 79, 48, 55}
    };

    int valor;
    printf("\n Digite o valor a ser procurado: ");
    scanf("%d", &valor);

    int linha, coluna;

    if (buscaSequencial(matriz, 4, 4, valor, &linha, &coluna)) {
        printf("\n O valor %d foi encontrado na posicao (%d, %d) ", valor, linha + 1, coluna + 1);
    } else {
        printf("\n O valor %d nao foi encontrado na matriz", valor);
    }
}

