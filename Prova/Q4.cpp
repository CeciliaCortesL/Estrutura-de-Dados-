#include <stdio.h>


struct mercado {
    char nome[100];
    float precoCompra;
    float precoVenda;
    
};

int main(void) {
    
    struct mercado produto;

	printf("\n Digite o nome do produto: ");
    scanf("%s", produto.nome);

   
    printf("\n Digite o preco do produto: ");
    scanf("%f", &produto.precoCompra);
    
    produto.precoVenda = produto.precoCompra * 1.25;

    
    printf("\n Produto: %s ", produto.nome);
    printf("\n Preco de compra: R$ %.2f ", produto.precoCompra);
    printf("\n Preco de venda: R$ %.2f ", produto.precoVenda);

}