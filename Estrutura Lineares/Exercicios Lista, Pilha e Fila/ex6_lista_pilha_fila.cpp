#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool verificarBalanceamento(string expressao) {
    stack<char> pilha;

    for (char ch : expressao) {
        // Se for um parêntese de abertura, empilha
        if (ch == '(') {
            pilha.push(ch);
        }
        // Se for um parêntese de fechamento, tenta desempilhar
        else if (ch == ')') {
            if (pilha.empty()) {
                // Se a pilha estiver vazia, significa que não há um parêntese de abertura correspondente
                return false;
            }
            pilha.pop();
        }
    }

    // Se a pilha estiver vazia no final, todos os parênteses de abertura tiveram correspondentes de fechamento
    return pilha.empty();
}

int main() {
    string expressao1 = "(())()";
    string expressao2 = "(()";

    if (verificarBalanceamento(expressao1)) {
        cout << "Expressao: " << expressao1 << " → Válido" << endl;
    } else {
        cout << "Expressao: " << expressao1 << " → Inválido" << endl;
    }

    if (verificarBalanceamento(expressao2)) {
        cout << "Expressao: " << expressao2 << " → Válido" << endl;
    } else {
        cout << "Expressao: " << expressao2 << " → Inválido" << endl;
    }

    return 0;
}
