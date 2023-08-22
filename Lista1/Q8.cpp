#include <stdio.h>
#include <stdbool.h>

struct Produto
{
    char nome[100];
    float preco;
    int quantidadeEstoque;
};

bool comprarProduto(struct Produto *produto, int quantidadeComprada)
{
    if (quantidadeComprada <= produto->quantidadeEstoque)
    {
        produto->quantidadeEstoque -= quantidadeComprada;
        return true;
    }
    else
    {
        printf("\n Estoque insuficiente para a compra");
        return false;
    }
}

int main()
{
    struct Produto produtos[3];
    int numProdutos = 3;

    produtos[0] = (struct Produto){"Camiseta", 25.0, 10};
    produtos[1] = (struct Produto){"Calça Jeans", 60.0, 5};
    produtos[2] = (struct Produto){"Tênis", 80.0, 7};

    printf("\n Lista de Produtos: ");
    for (int i = 0; i < numProdutos; i++)
    {
        printf("\n %d. %s - Preco: %.2f - Estoque: %d\n", i + 1, produtos[i].nome, produtos[i].preco, produtos[i].quantidadeEstoque);
    }

    int opcao, quantidade;
    float totalCompra = 0.0;

    do
    {
        printf("\n Digite o numero do produto que deseja comprar (0 para finalizar): ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= numProdutos)
        {
            printf("\n Digite a quantidade desejada: ");
            scanf("%d", &quantidade);

            if (comprarProduto(&produtos[opcao - 1], quantidade))
            {
                totalCompra += produtos[opcao - 1].preco * quantidade;
                printf("\n Produto comprado com sucesso");
            }
        }
        else if (opcao != 0)
        {
            printf("\n Opção invalida");
        }
    } while (opcao != 0);

    printf("\n Total da Compra: %.2f", totalCompra);

    return 0;
}
