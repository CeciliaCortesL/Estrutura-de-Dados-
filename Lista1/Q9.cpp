#include <stdio.h>
#include <stdbool.h>
#include <time.h>

struct Funcionario
{
    char nome[100];
    char cargo[100];
    float salario;
    struct tm dataAdmissao;
};

void darAumento(struct Funcionario *funcionario, float percentualAumento)
{
    funcionario->salario *= (1 + percentualAumento / 100);
    printf("\n Aumento de salario concedido com sucesso");
}

int calcularTempoServico(struct Funcionario funcionario)
{
    time_t tempoAtual;
    time(&tempoAtual);
    struct tm *dataAtual = localtime(&tempoAtual);

    int anos = dataAtual->tm_year + 1900 - funcionario.dataAdmissao.tm_year;
    int meses = dataAtual->tm_mon - funcionario.dataAdmissao.tm_mon;

    if (meses < 0)
    {
        anos--;
        meses += 12;
    }

    return anos;
}

int main()
{
    struct Funcionario meuFuncionario;

    printf("\n Digite o nome do funcionario: ");
    scanf("%s", meuFuncionario.nome);

    printf("\n Digite o cargo do funcionario: ");
    scanf("%s", meuFuncionario.cargo);

    printf("\n Digite o salario do funcionario: ");
    scanf("%f", &meuFuncionario.salario);

    printf("\n Digite a data de admissao do funcionário (AAAA MM DD): ");
    scanf("%d %d %d", &meuFuncionario.dataAdmissao.tm_year, &meuFuncionario.dataAdmissao.tm_mon, &meuFuncionario.dataAdmissao.tm_mday);

    darAumento(&meuFuncionario, 10.0);

    int tempoServico = calcularTempoServico(meuFuncionario);
    printf("\n Tempo de servico: %d anos", tempoServico);

    return 0;
}
