#include <iostream>

using namespace std;

int maior_elemento(int vet[], int n) {
    if (n == 1)
        return vet[0]; // Caso base: se só tem 1 elemento, ele é o maior
    else {
        int maiorRestante = maior_elemento(vet, n - 1);
        if (vet[n - 1] > maiorRestante)
            return vet[n - 1];
        else
            return maiorRestante;
    }
}

int main() {
    int vet[] = {4, 15, 2, 9, 27, 6};
    int n = sizeof(vet) / sizeof(vet[0]);

    cout << "Maior elemento do vetor: " << maior_elemento(vet, n) << endl;

    return 0;
}
