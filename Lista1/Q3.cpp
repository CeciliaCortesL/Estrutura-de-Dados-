#include <stdio.h>
#include <math.h>

struct Ponto
{
    float x;
    float y;
};

float calcularDistancia(struct Ponto p1, struct Ponto p2)
{
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}

float calcularInclinacao(struct Ponto p1, struct Ponto p2)
{
    if (p2.x - p1.x == 0)
    {
        return INFINITY;
    }
    return (p2.y - p1.y) / (p2.x - p1.x);
}

int main(void)
{
    struct Ponto ponto1 = {2.0, 3.0};
    struct Ponto ponto2 = {5.0, 8.0};

    float distancia = calcularDistancia(ponto1, ponto2);
    printf("\n Distancia entre os pontos: %.2f", distancia);

    float inclinacao = calcularInclinacao(ponto1, ponto2);
    printf("\n Inclinacao da reta: %.2f", inclinacao);

    return 0;
}