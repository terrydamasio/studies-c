#include <iostream>
using namespace std;

class Fila {
private:
    int *vetor;
    int frente, tras, capacidade;

public:
    // Construtor para inicializar a fila
    Fila(int capacidade) {
        this->capacidade = capacidade;
        vetor = new int[capacidade];
        frente = 0;
        tras = 0;
    }

    // Destruidor para desalocar a memória
    ~Fila() {
        delete[] vetor;
    }

    // Verifica se a fila está vazia
    bool isEmpty() {
        return frente == tras;
    }

    // Verifica se a fila está cheia
    bool isFull() {
        return tras == capacidade;
    }

    // Inserir um elemento na fila (enqueue)
    void enqueue(int valor) {
        if (isFull()) {
            cout << "Fila cheia! Não é possível adicionar o elemento." << endl;
        } else {
            vetor[tras] = valor;
            tras++;
        }
    }

    // Remover um elemento da fila (dequeue)
    void dequeue() {
        if (isEmpty()) {
            cout << "Fila vazia! Não há elementos para remover." << endl;
        } else {
            frente++;
        }
    }

    // Exibir o primeiro elemento da fila (front)
    int front() {
        if (isEmpty()) {
            cout << "Fila vazia!" << endl;
            return -1;
        } else {
            return vetor[frente];
        }
    }
};

int main() {
    Fila fila(5);  // Criação de uma fila com capacidade para 5 elementos

    fila.enqueue(10);
    fila.enqueue(20);
    fila.enqueue(30);
    fila.enqueue(40);
    fila.enqueue(50);

    cout << "Primeiro elemento da fila: " << fila.front() << endl;

    fila.dequeue();
    cout << "Após remover um elemento, o primeiro elemento é: " << fila.front() << endl;

    fila.enqueue(60);
    cout << "Após adicionar 60, o primeiro elemento é: " << fila.front() << endl;

    return 0;
}
