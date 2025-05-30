#include <stdio.h>
#include <iostream>

int main () {
    int vetor[] = {2, 4, 6, 8, 10, 12, 13, 14, 16, 18};
    int ini = 0, fim = 9, meio;
    while (ini <= fim) {
        meio = (ini + fim) / 2;
        if (vetor[meio] == 13) {
            cout << "Encontrado na posição: " << meio << endl;
            break;
        } else if (vetor[meio] < 13) {
            ini = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return 0;
}