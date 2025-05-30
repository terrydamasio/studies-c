#include <stdio.h>
#include <iostream>

int main () {
    
    int v[] = {22, 11, 99, 88, 9, 7, 42, 65, 33, 10};
    for (int i = 1; i < 10; i++) {
        int chave = v[i], j = i - 1;
        while (j >= 0 && v[j] > chave) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = chave;
    }

    return 0;
}