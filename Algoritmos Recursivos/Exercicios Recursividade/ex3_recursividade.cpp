#include <iostream>

using namespace std;

int soma_digitos(int n) {
    if (n < 10)
        return n;
    else
        return (n % 10) + soma_digitos(n / 10);
}

int main() {
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    // Garante que o número seja positivo
    if (numero < 0) {
        numero = -numero;
    }

    cout << "Soma dos dígitos: " << soma_digitos(numero) << endl;

    return 0;
}
