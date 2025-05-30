#include <stdio.h>
#include <iostream>

int main () {
    int vetor[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int ini = 0, fim = 9, meio, comparacoes = 0;
    while (ini <= fim) {
        comparacoes++;
        meio = (ini + fim) / 2;
        if (vetor[meio] == 100) break;
        else if (vetor[meio] < 100) ini = meio + 1;
        else fim = meio - 1;
    }
    cout << "Comparações: " << comparacoes << endl;

    return 0;
}