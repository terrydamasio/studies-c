#include <stdio.h>

// Função para simular o "construtor" que inicializa os dados da pessoa
void registrarPessoa(char nome[], int *idade, float *altura) {
    scanf("%s", nome);    // Lê o nome
    scanf("%d", idade);   // Lê a idade
    scanf("%f", altura);  // Lê a altura
}

int main() {
    char nome[51];
    int idade;
    float altura;

    // Chamando a função para registrar a pessoa
    registrarPessoa(nome, &idade, &altura);

    // Exibindo os dados da pessoa
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);

    return 0;
}
