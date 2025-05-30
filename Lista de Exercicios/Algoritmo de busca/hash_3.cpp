#include <stdio.h>
#include <iostream>

int main () {
  int tabela[10];
    for (int i = 0; i < 10; i++) tabela[i] = -1;

    int dados[] = {17, 27, 37, 47, 57};
    for (int i = 0; i < 5; i++) {
        int valor = dados[i];
        int pos = valor % 10;
        while (tabela[pos] != -1) {
            pos = (pos + 1) % 10;
        }
        tabela[pos] = valor;
    }

    int buscado = 37, pos = buscado % 10;
    while (tabela[pos] != -1) {
        if (tabela[pos] == buscado) {
            cout << "Encontrado na posição: " << pos << endl;
            break;
        }
        pos = (pos + 1) % 10;
    }  

    return 0;
}