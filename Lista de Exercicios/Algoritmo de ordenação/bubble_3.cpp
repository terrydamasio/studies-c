#include <stdio.h>
#include <iostream>

int main () {

    int v[] = {12, 3, 45, 7, 18, 9, 25, 31, 6, 11};
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - 1 - i; j++) {
            if (v[j] < v[j+1]) swap(v[j], v[j+1]);
        }
    }

    return 0;
}