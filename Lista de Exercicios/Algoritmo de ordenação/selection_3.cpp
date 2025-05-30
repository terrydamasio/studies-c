#include <stdio.h>
#include <iostream>

int main () {

    int v[] = {42, 33, 60, 15, 75, 12, 25, 90, 1, 6};
    for (int i = 0; i < 10 - 1; i++) {
        int max = i;
        for (int j = i + 1; j < 10; j++) {
            if (v[j] > v[max]) max = j;
        }
        if (max != i) swap(v[i], v[max]);
    }

    return 0;
}