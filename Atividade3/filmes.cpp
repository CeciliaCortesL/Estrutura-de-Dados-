#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Filme
{
    char titulo[100];
    int classificacao;
    char diretor[100];
    char genero[50];
    char duracao[50];
};

struct Filme *criarFilme(const char *titulo, int classificacao, const char *diretor, const char *genero, const char *duracao)
{
    struct Filme *novoFilme = (struct Filme *)malloc(sizeof(struct Filme));

    if (novoFilme != NULL)
    {
        strcpy(novoFilme->titulo, titulo);
        novoFilme->classificacao = classificacao;
        strcpy(novoFilme->diretor, diretor);
        strcpy(novoFilme->genero, genero);
        strcpy(novoFilme->duracao, duracao);
    }

    return novoFilme;
}

int main(void)
{
    struct Filme *meuFilme = criarFilme("Harry-Potter", 14, "Chris Columbus", "Fantasia", "2h 10min");

    if (meuFilme != NULL)
    {
        printf("\n Filme: %s", meuFilme->titulo);
        printf("\n CLassificacao: %d", meuFilme->classificacao);
        printf("\n Diretor: %d", meuFilme->diretor);
        printf("\n Genero: %d", meuFilme->genero);
        printf("\n Duracao: %d", meuFilme->duracao);

        free(meuFilme);
    }
    else
    {
        printf("\n Erro");
    }
    return 0;
}
