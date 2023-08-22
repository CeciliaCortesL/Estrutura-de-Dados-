#include <stdio.h>
#include <string.h>

struct Contato
{
    char nome[100];
    char telefone[20];
};

void adicionarContato(struct Contato agenda[], int *numContatos)
{
    if (*numContatos < 100)
    {
        struct Contato novoContato;

        printf("\n Digite o nome do contato: ");
        scanf("%s", novoContato.nome);

        printf("\n Digite o numero de telefone do contato: ");
        scanf("%s", novoContato.telefone);

        agenda[*numContatos] = novoContato;
        (*numContatos)++;

        printf("\n Contato adicionado com sucesso");
    }
    else
    {
        printf("\n A agenda está cheia. Nao eh possivel adicionar mais contatos");
    }
}

void listarContatos(struct Contato agenda[], int numContatos)
{
    printf("\nL ista de Contatos:\n");
    for (int i = 0; i < numContatos; i++)
    {
        printf("\n Nome: %s", agenda[i].nome);
        printf("\n Telefone: %s", agenda[i].telefone);
        printf("--------------------\n");
    }
}

void buscarContato(struct Contato agenda[], int numContatos, const char *nome)
{
    printf("\nResultado da Busca:\n");
    for (int i = 0; i < numContatos; i++)
    {
        if (strcmp(agenda[i].nome, nome) == 0)
        {
            printf("\n Nome: %s", agenda[i].nome);
            printf("\n Telefone: %s", agenda[i].telefone);
            return;
        }
    }
    printf("\n Contato nao encontrado");
}

int main()
{
    struct Contato agenda[100];
    int numContatos = 0;

    int opcao;
    char nomeBusca[100];

    do
    {
        printf("\nMenu:\n");
        printf("1 - Adicionar Contato\n");
        printf("2 - Listar Contatos\n");
        printf("3 - Buscar Contato por Nome\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            adicionarContato(agenda, &numContatos);
            break;
        case 2:
            listarContatos(agenda, numContatos);
            break;
        case 3:
            printf("\n Digite o nome do contato que deseja buscar: ");
            scanf("%s", nomeBusca);
            buscarContato(agenda, numContatos, nomeBusca);
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
