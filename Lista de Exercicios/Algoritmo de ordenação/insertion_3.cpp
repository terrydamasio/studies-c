#include <stdio.h>
#include <iostream>

int main () {

    int v[] = {30, 20, 10, 40, 50, 70, 60, 90, 80, 100};
    for (int i = 1; i < 10; i++) {
        int chave = v[i], j = i - 1;
        while (j >= 0 && v[j] < chave) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = chave;
    }

    return 0;
}