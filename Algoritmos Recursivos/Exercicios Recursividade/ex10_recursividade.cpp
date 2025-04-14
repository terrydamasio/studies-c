#include <iostream>
#include <cstring>
using namespace std;

int produto_iterativo(int a, int b) {
    int resultado = 0;
    bool negativo = false;

    if (b < 0) {
        b = -b;
        negativo = true;
    }

    for (int i = 0; i < b; i++) {
        resultado += a;
    }

    return negativo ? -resultado : resultado;
}
