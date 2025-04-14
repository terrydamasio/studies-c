#include <iostream>
#include <stack>
#include <string>
using namespace std;

string inverterString(string str) {
    stack<char> pilha;
    string resultado = "";

    // Empilha todos os caracteres da string
    for (char c : str) {
        pilha.push(c);
    }

    // Desempilha os caracteres e forma a string invertida
    while (!pilha.empty()) {
        resultado += pilha.top();  // Adiciona o topo da pilha ao resultado
        pilha.pop();                // Remove o topo da pilha
    }

    return resultado;
}

int main() {
    string str = "Olá, Mundo!";
    string strInvertida = inverterString(str);

    cout << "String original: " << str << endl;
    cout << "String invertida: " << strInvertida << endl;

    return 0;
}
