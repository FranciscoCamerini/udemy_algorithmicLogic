#include <stdio.h>
#include <stdlib.h>

int main()
{

    int idade, cont;
    double media, soma;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    if (idade < 0){
        printf("IMPOSSIVEL CALCULAR");
    }
    else{

    cont = 0;
    soma = 0;

    while(idade > 0){
        soma = soma + idade;
        cont++;
        scanf("%d", &idade);
    }

    media = (double) soma / cont;

    printf("MEDIA = %lf", media);

    }
    return 0;
}
