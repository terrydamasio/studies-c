#include <iostream>

using namespace std;

// Função recursiva para calcular o MDC usando o Algoritmo de Euclides
int mdcRecursivo(int a, int b) {
    if (b == 0)
        return a;
    return mdcRecursivo(b, a % b);
}

// Função iterativa para calcular o MDC usando o Algoritmo de Euclides
int mdcIterativo(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;

    cout << "Digite dois números: ";
    cin >> a >> b;

    cout << "MDC Recursivo: " << mdcRecursivo(a, b) << endl;
    cout << "MDC Iterativo: " << mdcIterativo(a, b) << endl;

    return 0;
}
