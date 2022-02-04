#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double n1, n2, media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &n1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &n2);

    media = (n1 + n2) / 2;

    printf("\nNOTA FINAL = %.1lf \n", media);
    if (media < 60) {
        printf("REPROVADO");
    }

    return 0;
}
