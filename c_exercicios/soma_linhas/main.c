#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &m);

    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &n);

    int mat[m][n];
    int vet[m];

    for (int i = 0; i < m; i++){
            vet[i] = 0;
            printf("Digite os elementos da %da. linha:\n", i+1);
        for (int j = 0; j < n; j++){
            scanf("%d", &mat[i][j]);
            vet[i] = vet[i] + mat[i][j];
        }
    }

    printf("\nVetor gerado: \n");
    for (int i = 0; i < m; i++){
        printf("%d\n", vet[i]);
    }

    return 0;
}
