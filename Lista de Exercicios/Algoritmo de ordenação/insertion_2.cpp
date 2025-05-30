#include <stdio.h>
#include <iostream>

int main () {

    int v[] = {9, 8, 3, 4, 7, 6, 1, 2, 5, 0};
    vector<int> pares;
    vector<int> posicoes;

    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            pares.push_back(v[i]);
            posicoes.push_back(i);
        }
    }

    for (int i = 1; i < pares.size(); i++) {
        int chave = pares[i], j = i - 1;
        while (j >= 0 && pares[j] > chave) {
            pares[j + 1] = pares[j];
            j--;
        }
        pares[j + 1] = chave;
    }

    for (int i = 0; i < pares.size(); i++) {
        v[posicoes[i]] = pares[i];
    }
    
    return 0;
}