#include <stdio.h>
#include <iostream>
#define TAM 10

// dados não precisam estar ordenados
// a busca por espalhamento (Hashing) usa uma função hash para transformar valores em índices, permitindo buscas rápidas em tempo constante O(1).
// ao inserir um elemento, realiza um calculo, onde retornará um índice, e após isso realizará uma inserção.
// para realizar a busca do valor desejado, basta usar a mesma função de calculo de inserção, dessa maneira, realizando apenas uma comparação.

int tabelaHash[TAM];
    // Função hash simples
    int hash(int chave) {
    return chave % TAM;
}

// Inserir elemento
void inserir(int chave) {
    int indice = hash(chave);
    tabelaHash[indice] = chave;
}

// Buscar elemento
int buscar(int chave) {
    int indice = hash(chave);
    
    if (tabelaHash[indice] == chave)
        return indice; // encontrado
    else
        return -1; // não encontrado
}


int main() {
    // Inicializar tabela com -1
    for (int i = 0; i < TAM; i++)
        tabelaHash[i] = -1;

    inserir(15);
    inserir(25);
    inserir(35);
    
    int valor = 25;
    int pos = buscar(valor);
    
    if (pos != -1)
        std::cout << "Valor: " << valor << " encontrado na posicao hash: " << pos << " .\n";
    else
        std::cout << "Valor nao encontrado na tabela hash.\n";
    
    return 0;
}