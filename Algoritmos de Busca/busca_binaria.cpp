#include <stdio.h>
#include <iostream>

// a busca binária deve ser usada em listas ordenadas, dividindo sucessivamente a lista ao meio até encontrar o valor

// 1. verifique se a chave de busca é igual ao valor da posição do meio da lista
// 2. caso o valor dessa posição seja maior que a chave, repita o processo, porém com todos os elementos da posição seguinte a do meio
// 3. caso o valor dessa posição seja menor que a chave, repita o processo, porém com todos os elementos da posição anterior a do meio
// dados precisam estar ordenados

int buscaBinaria (int vetor[], int tamanho, int valor) {
    int inicio = 0, fim = tamanho - 1, meio;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        
        if (vetor[meio] == valor) {
            return meio; // valor encontrado
        } else if (vetor[meio] < valor) {
            inicio = meio + 1; // busca na metade superior 
        } else {
            fim = meio - 1; // busca na metade inferior 
        }
    }

    return -1; // não encontrado
}

int main() {
    int vetor[] = {3, 6, 9, 12, 15, 18, 21};
    int valor = 15;
    int tamanho = 7;

    int pos = buscaBinaria(vetor, tamanho, valor);

    if (pos != -1) {
        std::cout << "Valor: " << valor << " encontrado na posicao: " << pos << ".\n";
    } else {
        std::cout << "Valor nao encontrado.\n";
    }

    return 0;
}