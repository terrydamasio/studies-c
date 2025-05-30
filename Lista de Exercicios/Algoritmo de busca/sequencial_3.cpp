#include <stdio.h>
#include <iostream>

int main () {
    int vetor[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int indice = -1;
    for(int i = 0; i < 10; i++) {
        if(vetor[i] == 55) {
            indice = i;
            break;
        }
    }
    cout << "Índice de 55: " << indice << endl;

    return 0;
}