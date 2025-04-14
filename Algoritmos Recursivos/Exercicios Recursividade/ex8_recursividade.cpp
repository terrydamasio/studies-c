#include <iostream>
#include <cstring>
using namespace std;

int maior_elemento_iterativo(int vet[], int n) {
    int maior = vet[0];
    for (int i = 1; i < n; i++) {
        if (vet[i] > maior)
            maior = vet[i];
    }
    return maior;
}
