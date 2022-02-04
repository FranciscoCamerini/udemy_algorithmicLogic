void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main(){
    char nome1[50], nome2[50];
    int idade1, idade2;
    double idadeMedia;

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    gets(nome1);
    ler_texto(nome1, 50);
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");

    fseek(stdin, 0, SEEK_END);
    gets(nome2);
    limpar_entrada();
    ler_texto(nome2, 50);
    printf("Idade: ");
    scanf("%d", &idade2);
