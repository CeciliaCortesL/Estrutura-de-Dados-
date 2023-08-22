#include <stdio.h>
#include <stdbool.h>

struct Estudante
{
    char nome[100];
    int matricula;
    float notas[3];
};

float calcularMedia(struct Estudante estudante)
{
    float somaNotas = 0;
    for (int i = 0; i < 3; i++)
    {
        somaNotas += estudante.notas[i];
    }
    return somaNotas / 3;
}

bool estaAprovado(struct Estudante estudante)
{
    float media = calcularMedia(estudante);
    return media >= 7.0;
}

int main()
{
    struct Estudante estudante1;

    printf("\n Digite o nome do estudante: ");
    scanf("%s", estudante1.nome);

    printf("\n Digite a matricula do estudante: ");
    scanf("%d", &estudante1.matricula);

    printf("\n Digite as notas do estudante nas tres disciplinas: ");
    for (int i = 0; i < 3; i++)
    {
        printf("\n Nota da disciplina %d: ", i + 1);
        scanf("%f", &estudante1.notas[i]);
    }

    float mediaEstudante1 = calcularMedia(estudante1);
    bool aprovadoEstudante1 = estaAprovado(estudante1);

    printf("\n Média do estudante: %.2f", mediaEstudante1);
    if (aprovadoEstudante1)
    {
        printf("\n Estudante aprovado");
    }
    else
    {
        printf("\n Estudante reprovado");
    }

    return 0;
}
