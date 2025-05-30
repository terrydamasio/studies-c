#include <stdio.h>
#include <iostream>

int main () {

    int v[] = {9, 7, 5, 3, 1, 2, 4, 6, 8, 0};
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - 1 - i; j++) {
            if (v[j] > v[j + 1]) swap(v[j], v[j + 1]);
        }
    }

    return 0;
}