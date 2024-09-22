#include <stdio.h>

int main() {
    char titulo[101];
    char nomeAutor[51];
    char sobrenomeAutor[51];
    int dia, mes, ano;

    // Leitura dos dados do livro
    scanf(" %[^\n]", titulo);
    scanf(" %[^\n]", nomeAutor);
    scanf(" %[^\n]", sobrenomeAutor);
    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &ano);

    // Exibindo as informações do livro
    printf("Título: %s\n", titulo);
    printf("Autor: %s %s\n", nomeAutor, sobrenomeAutor);
    printf("Data de Publicação: %02d/%02d/%04d\n", dia, mes, ano);

    return 0;
}
