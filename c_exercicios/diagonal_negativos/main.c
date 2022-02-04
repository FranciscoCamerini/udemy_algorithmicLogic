#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int n, negtv;
    negtv = 0;


    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);
    int mat[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
            if (mat[i][j] < 0){
                negtv++;
            }
        }
    }

    printf("\nDIAGONAL PRINCIPAL:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j){
                printf("%d ", mat[i][j]);
            }
        }
    }

    printf("\nQUANTIDADE DE NEGATIVOS: %d", negtv);
    printf("\n");


    return 0;
}
