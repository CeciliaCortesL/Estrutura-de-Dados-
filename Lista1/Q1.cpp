#include <stdio.h>

struct Pessoa
{
    char nome[100];
    int idade;
    float altura;
};

int main()
{
    struct Pessoa pessoa1;

    printf("\n Digite o nome: ");
    scanf("%s", pessoa1.nome);

    printf("\n Digite a idade: ");
    scanf("%d", &pessoa1.idade);

    printf("\n Digite a altura: ");
    scanf("%f", &pessoa1.altura);

    printf("\n Dados:");
    printf("\n Nome: %s", pessoa1.nome);
    printf("\n Idade: %d", pessoa1.idade);
    printf("\n Altura: %.2f", pessoa1.altura);

    return 0;
}