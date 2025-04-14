#include <iostream>
using namespace std;

void contagem_regressiva(int n) {
    if (n < 0) return;
    cout << n << " ";
    contagem_regressiva(n - 1);
}
