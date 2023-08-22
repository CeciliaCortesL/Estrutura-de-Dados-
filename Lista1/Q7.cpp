#include <stdio.h>
#include <stdbool.h>

struct ContaBancaria
{
    char nomeTitular[100];
    int numeroConta;
    float saldo;
};

void depositar(struct ContaBancaria *conta, float valor)
{
    conta->saldo += valor;
    printf("\n Deposito de %.2f realizado com sucesso ", valor);
}

bool sacar(struct ContaBancaria *conta, float valor)
{
    if (valor <= conta->saldo)
    {
        conta->saldo -= valor;
        printf("\n Saque de %.2f realizado com sucesso", valor);
        return true;
    }
    else
    {
        printf("\n Saldo insuficiente para o saque");
        return false;
    }
}

float verificarSaldo(struct ContaBancaria conta)
{
    return conta.saldo;
}

int main()
{
    struct ContaBancaria minhaConta;

    printf("\n Digite o nome do titular da conta: ");
    scanf("%s", minhaConta.nomeTitular);

    printf("\n Digite o numero da conta: ");
    scanf("%d", &minhaConta.numeroConta);

    minhaConta.saldo = 0.0;

    depositar(&minhaConta, 100.0);
    sacar(&minhaConta, 50.0);

    float saldoAtual = verificarSaldo(minhaConta);
    printf("\n Saldo atual: %.2f\n", saldoAtual);

    return 0;
}
