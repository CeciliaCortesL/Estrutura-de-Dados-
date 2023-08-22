#include <stdio.h>
#include <string.h>

struct Livro
{
    char titulo[100];
    char autor[100];
    int anoPublicacao;
};

void adicionarLivro(struct Livro biblioteca[], int *numLivros)
{
    if (*numLivros < 100)
    {
        struct Livro novoLivro;

        printf("\n Digite o título do livro: ");
        scanf(" %[^\n]s", novoLivro.titulo);

        printf("\n Digite o autor do livro: ");
        scanf(" %[^\n]s", novoLivro.autor);

        printf("\n Digite o ano de publicação do livro: ");
        scanf("%d", &novoLivro.anoPublicacao);

        biblioteca[*numLivros] = novoLivro;
        (*numLivros)++;

        printf("\n Livro adicionado com sucesso");
    }
    else
    {
        printf("\n A biblioteca esta cheia. Nao eh possivel adicionar mais livros");
    }
}

void listarLivros(struct Livro biblioteca[], int numLivros)
{
    printf("\nLista de Livros:\n");
    for (int i = 0; i < numLivros; i++)
    {
        printf("\n Título: %s", biblioteca[i].titulo);
        printf("\n Autor: %s", biblioteca[i].autor);
        printf("\n Ano de Publicação: %d", biblioteca[i].anoPublicacao);
        printf("--------------------\n");
    }
}

void buscarLivrosPorAutor(struct Livro biblioteca[], int numLivros, const char *autor)
{
    printf("\nResultado da Busca por Autor:\n");
    int encontrados = 0;
    for (int i = 0; i < numLivros; i++)
    {
        if (strcmp(biblioteca[i].autor, autor) == 0)
        {
            printf("\n Título: %s", biblioteca[i].titulo);
            printf("\n Ano de Publicação: %d", biblioteca[i].anoPublicacao);
            printf("--------------------\n");
            encontrados++;
        }
    }
    if (encontrados == 0)
    {
        printf("\n Nenhum livro encontrado para o autor \"%s\"", autor);
    }
}

int main()
{
    struct Livro biblioteca[100];
    int numLivros = 0;

    int opcao;
    char autorBusca[100];

    do
    {
        printf("\nMenu:\n");
        printf("\n 1 - Adicionar Livro");
        printf("\n 2 - Listar Livros");
        printf("\n 3 - Buscar Livros por Autor");
        printf("\n 4 - Sair");
        printf("\n Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            adicionarLivro(biblioteca, &numLivros);
            break;
        case 2:
            listarLivros(biblioteca, numLivros);
            break;
        case 3:
            printf("\n Digite o autor dos livros que deseja buscar: ");
            scanf(" %[^\n]s", autorBusca);
            buscarLivrosPorAutor(biblioteca, numLivros, autorBusca);
            break;
        case 4:
            printf("\n Encerrando o programa");
            break;
        default:
            printf("\n Opção invalida");
        }
    } while (opcao != 4);

    return 0;
}
