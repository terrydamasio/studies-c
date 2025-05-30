#include <stdio.h>
#include <iostream>

int main () {
    int vetor[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int ini = 0, fim = 9, meio;
    while (ini <= fim) {
        meio = (ini + fim) / 2;
        if (vetor[meio] < 27) ini = meio + 1;
        else fim = meio - 1;
    }
    cout << "Posição para inserir 27: " << ini << endl;

    return 0;
}