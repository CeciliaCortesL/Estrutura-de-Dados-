#include <stdio.h>
#include <stdbool.h>

struct Moeda
{
    float dolares;
    float euros;
};

float converterDolaresParaEuros(float valorDolares, float taxaCambio)
{
    return valorDolares * taxaCambio;
}

float converterEurosParaDolares(float valorEuros, float taxaCambio)
{
    return valorEuros / taxaCambio;
}

int main()
{
    struct Moeda moeda;
    float taxaCambio;

    printf("\n Digite a taxa de cambio (valor de 1 dolar em euros): ");
    scanf("%f", &taxaCambio);

    int opcao;
    float valor;

    do
    {
        printf("\nMenu:\n");
        printf("\n 1 - Converter Dolares para Euros");
        printf("\n 2 - Converter Euros para Dolares");
        printf("\n 3 - Sair");
        printf("\n Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\n Digite o valor em Dolares: ");
            scanf("%f", &valor);
            moeda.dolares = valor;
            moeda.euros = converterDolaresParaEuros(valor, taxaCambio);
            printf("\n %.2f Dolares eh igual a %.2f Euros", valor, moeda.euros);
            break;
        case 2:
            printf("\n Digite o valor em Euros: ");
            scanf("%f", &valor);
            moeda.euros = valor;
            moeda.dolares = converterEurosParaDolares(valor, taxaCambio);
            printf("\n %.2f Euros é igual a %.2f Dólares", valor, moeda.dolares);
            break;
        case 3:
            printf("\n Encerrando o programa");
            break;
        default:
            printf("\n Opção invalida");
        }
    } while (opcao != 3);

    return 0;
}
