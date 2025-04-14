#include <iostream>
#include <stack>
using namespace std;

string decimalParaBinario(int n) {
    stack<int> pilha;
    string binario = "";

    // Divida o número por 2 e empilhe o resto
    while (n > 0) {
        pilha.push(n % 2);
        n /= 2;  // Realiza a divisão inteira por 2
    }

    // Desempilhar e construir o número binário
    while (!pilha.empty()) {
        binario += to_string(pilha.top());
        pilha.pop();
    }

    return binario;
}

int main() {
    int numero1 = 10;
    int numero2 = 25;

    cout << "Número: " << numero1 << " → Binário: " << decimalParaBinario(numero1) << endl;
    cout << "Número: " << numero2 << " → Binário: " << decimalParaBinario(numero2) << endl;

    return 0;
}
