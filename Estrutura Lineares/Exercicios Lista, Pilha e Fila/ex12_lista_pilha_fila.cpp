#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Função para inverter uma fila usando uma pilha
void inverterFila(queue<int>& fila) {
    stack<int> pilha;
    
    // Remover os elementos da fila e empilhá-los
    while (!fila.empty()) {
        pilha.push(fila.front());
        fila.pop();
    }

    // Desempilhar os elementos da pilha e re-adicionar à fila
    while (!pilha.empty()) {
        fila.push(pilha.top());
        pilha.pop();
    }
}

// Função para exibir os elementos da fila
void exibirFila(queue<int>& fila) {
    if (fila.empty()) {
        cout << "Fila vazia!" << endl;
        return;
    }
    
    cout << "Elementos da fila: ";
    queue<int> tempFila = fila;
    while (!tempFila.empty()) {
        cout << tempFila.front() << " ";
        tempFila.pop();
    }
    cout << endl;
}

int main() {
    // Criando uma fila e inserindo alguns elementos
    queue<int> fila;
    fila.push(1);
    fila.push(2);
    fila.push(3);
    fila.push(4);
    fila.push(5);

    // Exibindo a fila antes de inverter
    cout << "Fila antes de inverter: ";
    exibirFila(fila);

    // Invertendo a fila
    inverterFila(fila);

    // Exibindo a fila após inverter
    cout << "Fila após inverter: ";
    exibirFila(fila);

    return 0;
}
