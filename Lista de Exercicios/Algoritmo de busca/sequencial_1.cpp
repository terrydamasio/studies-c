#include <stdio.h>
#include <iostream>

int main () {
    int vetor[] = {15, 8, 25, 7, 12, 18, 5, 9, 30, 3};
    int tamanho = 10, alvo = 25;

    for(int i = 0; i < tamanho; i++) {
        if(vetor[i] == alvo) {
            cout << "Encontrado na posição: " << i << endl;
            break;
        }
    }

    return 0;
}