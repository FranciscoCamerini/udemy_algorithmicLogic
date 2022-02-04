#include <stdio.h>
#include <string.h>

void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length){
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}



int main()
{

    int n, dz6;
    double soma, media, menor;


    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    int idade[n];
    char nome[n][50];
    double alt[n];

    printf("\n");

    dz6 = 0;
    soma = 0;
    for (int i = 0; i < n; i++)
    {

        printf("Dados da %da pessoa:\n", i+1);

        printf("Nome: ");
        limpar_entrada();
        ler_texto(nome[i], 50);

        printf("Idade: ");
        scanf("%d", &idade[i]);
        if (idade[i] < 16)
        {
            dz6++;
        }

        printf("Altura: ");
        scanf("%lf", &alt[i]);
        soma = soma + alt[i];
        printf("\n");
    }

    media = soma / n;
    menor = (double) dz6 * 100 / n;

    printf("Altura media = %.2lf\n", media);
    printf("Pessoas com menos de 16 anos: %.1lf%%", menor);

    for (int z = 0; z < n; z++){
        if (idade[z] < 16){
            printf("\n%s\n", nome[z]);
        }
    }

    printf("\n");

    return 0;
}
