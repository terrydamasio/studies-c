#include <iostream>

using namespace std;

int contar_digitos(int n) {
    if (n < 10)
        return 1;
    else
        return 1 + contar_digitos(n / 10);
}

int main() {
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    // Para números negativos, transforma em positivo
    if (numero < 0) {
        numero = -numero;
    }

    cout << "Quantidade de dígitos: " << contar_digitos(numero) << endl;

    return 0;
}
