#include <stdio.h>
#include <iostream>

int main () {
    int vetor[] = {7, 3, 5, 7, 9, 2, 7, 1, 4, 6};
    int cont = 0;
    for(int i = 0; i < 10; i++) {
        if(vetor[i] == 7) cont++;
    }
    cout << "Ocorrências de 7: " << cont << endl;

    return 0;
}