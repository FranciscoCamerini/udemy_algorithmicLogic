#include <stdio.h>


int main()
{

    double soma, media;
    int n;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);
    double vet[n];

        soma = 0;
    for (int i = 0; i < n; i++){
        printf("\nDigite um numero: ");
        scanf("%lf", &vet[i]);
        soma = soma + vet[i];
    }

    printf("\nVALORES = ");

    for (int i = 0; i < n; i++){
        printf("%.2lf ", vet[i]);
    }

    media = soma / n;

    printf("\nSOMA = %.3lf", soma);
    printf("\nMEDIA = %.3lf", media);
    printf("\n");

    return 0;
}
