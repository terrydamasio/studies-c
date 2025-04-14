#include <iostream>
#include <cstring>
using namespace std;

int soma_digitos_iterativo(int n) {
    int soma = 0;
    n = abs(n); // Se for negativo
    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }
    return soma;
}
