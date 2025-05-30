#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> hash[10];
    int elementos[] = {12, 22, 32, 42};
    for (int i = 0; i < 4; i++) {
        int pos = elementos[i] % 10;
        hash[pos].push_back(elementos[i]);
    }
    int buscado = 22;
    int pos = buscado % 10;
    for (int val : hash[pos]) {
        if (val == buscado) {
            cout << "Encontrado: " << val << " na posição " << pos << endl;
        }
    }

    return 0;
}
