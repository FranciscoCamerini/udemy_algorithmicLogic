#include <stdio.h>
#include <stdlib.h>

int main()
{

    double x, y, v, area, valor;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &x);

    printf("\nDigite o comprimento do terreno: ");
    scanf("%lf", &y);
    printf("\n");

    area = x * y;

    printf("\nDigite o valor do metro quadrado: ");
    scanf("%lf", &v);
    printf("\n");

    valor = area * v;

    printf("\nArea do terreno = %.2lf", area);
    printf("\nValor do terreno = %.2lf", valor);
    printf("\n");

    return 0;
}
