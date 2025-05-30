#include <stdio.h>
#include <iostream>

// a função recebe uma lista de numeros inteiros e uma chave de busca
// a função deve retornar o índice que contem a chave de busca ou o valor -1 caso a chave não seja encontrada
// a busca sequencial é util para conjuntos pequenos ou não ordenados
// consiste em verificar cada elemento até encontrar o valor desejado
// dados não precisam estar ordenados

int buscaSequencial(int vetor[], int tamanho, int valor) {
    for(int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            return i; // retorna o índice encontrado
        } 
    }

    return -1; // não encontrado
};

int main() {
    int vetor[] = {4, 6, 9, 12, 53, 59, 61};
    int valor = 12; 
    int tamanho = 7;

    int pos = buscaSequencial(vetor, tamanho, valor);

    if (pos != -1) {
        std::cout << "Valor: " << valor << " encontrado na posicao: " << pos << ".\n";
    } else {
        std::cout << "Valor nao encontrado.\n";
    }

    return 0;
}