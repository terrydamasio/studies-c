#include <stdio.h>
#include <iostream>

int main () {

    int v[] = {1,2,3,4,5,6,7,8,9,10};
    bool trocou;
    for (int i = 0; i < 10 - 1; i++) {
        trocou = false;
        for (int j = 0; j < 10 - 1 - i; j++) {
            if (v[j] > v[j+1]) {
                swap(v[j], v[j+1]);
                trocou = true;
            }
        }
        if (!trocou) break;
    }
    
    return 0;
}