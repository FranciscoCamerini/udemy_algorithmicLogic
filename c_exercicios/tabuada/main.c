#include <stdio.h>
#include <stdlib.h>

int main() {

    int x, i, n;

    printf("Deseja a tabuada de qual valor? ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++){
        x = n * i;
        printf("%d x %d = %d\n", n, i, x);
    }

    return 0;
}
