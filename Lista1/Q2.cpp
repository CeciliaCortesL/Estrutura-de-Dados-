#include <stdio.h>

struct Tipo
{
    int valorInteiro;
    float valorFlutuante;
    char letra;
};

int main(void)
{
    struct Tipo meuTipo;

    meuTipo.valorInteiro = 50;
    meuTipo.valorFlutuante = 3.67;
    meuTipo.letra = 'C';

    printf("\n Valor inteiro: %d", meuTipo.valorInteiro);
    printf("\n Valor Flutuante: %.2f", meuTipo.valorFlutuante);
    printf("\n Letra: %c", meuTipo.letra);

    return 0;
}