#include <stdio.h>
#include <iostream>

int main () {
    int vetor[] = {15, 25, 35, 45, 55};
    int hash[10] = {0};
    for(int i = 0; i < 5; i++) {
        int pos = vetor[i] % 10;
        hash[pos] = vetor[i];
    }
    for(int i = 0; i < 10; i++) {
        if (hash[i] != 0)
            cout << "Hash[" << i << "] = " << hash[i] << endl;
    }

    return 0;
}