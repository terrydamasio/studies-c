#include <iostream>
using namespace std;

class Pilha {
private:
    int* arr;        // Vetor para armazenar os elementos
    int capacidade;  // Capacidade máxima da pilha
    int topo;        // Índice do topo da pilha

public:
    // Construtor
    Pilha(int capacidade) {
        this->capacidade = capacidade;
        arr = new int[capacidade];  // Aloca o vetor
        topo = -1;  // Inicialmente a pilha está vazia
    }

    // Destruidor
    ~Pilha() {
        delete[] arr;  // Libera a memória alocada para o vetor
    }

    // Verifica se a pilha está vazia
    bool isEmpty() {
        return topo == -1;
    }

    // Inserir um elemento no topo da pilha
    void push(int valor) {
        if (topo == capacidade - 1) {
            cout << "Pilha cheia! Não é possível inserir mais elementos." << endl;
            return;
        }
        arr[++topo] = valor;  // Incrementa o topo e insere o valor
        cout << valor << " inserido na pilha." << endl;
    }

    // Remover o elemento do topo da pilha
    void pop() {
        if (isEmpty()) {
            cout << "Pilha vazia! Não há elementos para remover." << endl;
            return;
        }
        cout << arr[topo--] << " removido da pilha." << endl;  // Exibe e decrementa o topo
    }

    // Exibir o elemento do topo da pilha
    void top() {
        if (isEmpty()) {
            cout << "Pilha vazia! Não há elementos no topo." << endl;
            return;
        }
        cout << "Topo da pilha: " << arr[topo] << endl;
    }
};

int main() {
    Pilha p(5);  // Criar uma pilha com capacidade para 5 elementos

    // Operações da pilha
    p.push(10);
    p.push(20);
    p.push(30);
    p.push(40);
    p.push(50);

    p.top();  // Exibe o topo da pilha

    p.push(60);  // Tentativa de inserir elemento em pilha cheia

    p.pop();  // Remove o topo da pilha
    p.pop();
    p.pop();
    
    p.top();  // Exibe o topo da pilha após remoções

    p.pop();
    p.pop();
    p.pop();  // Tentativa de remover de pilha vazia

    return 0;
}
