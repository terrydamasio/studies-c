#include <stdio.h>

int potencia(int x, int y) {

    if (y == 0) return 1; // Caso base

    return x * potencia(x, y -1);
}


int main() {

    int base = 2, expoente = 4;
    
    printf("%d^%d = %d\n", base, expoente, potencia(base, expoente));

    return 0;
}