#include <iostream>
using namespace std;

class FilaCircular {
private:
    int *vetor;
    int frente, tras, capacidade;

public:
    // Construtor para inicializar a fila circular
    FilaCircular(int capacidade) {
        this->capacidade = capacidade;
        vetor = new int[capacidade];
        frente = 0;
        tras = 0;
    }

    // Destruidor para desalocar a memória
    ~FilaCircular() {
        delete[] vetor;
    }

    // Verifica se a fila circular está vazia
    bool isEmpty() {
        return frente == tras;
    }

    // Verifica se a fila circular está cheia
    bool isFull() {
        return (tras + 1) % capacidade == frente;
    }

    // Inserir um elemento na fila circular (enqueue)
    void enqueue(int valor) {
        if (isFull()) {
            cout << "Fila cheia! Não é possível adicionar o elemento." << endl;
        } else {
            vetor[tras] = valor;
            tras = (tras + 1) % capacidade; // Move o índice "tras" circularmente
        }
    }

    // Remover um elemento da fila circular (dequeue)
    void dequeue() {
        if (isEmpty()) {
            cout << "Fila vazia! Não há elementos para remover." << endl;
        } else {
            frente = (frente + 1) % capacidade; // Move o índice "frente" circularmente
        }
    }

    // Exibir o primeiro elemento da fila circular (front)
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
    FilaCircular fila(5);  // Criação de uma fila circular com capacidade para 5 elementos

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

    fila.dequeue();
    fila.dequeue();
    cout << "Após mais duas remoções, o primeiro elemento é: " << fila.front() << endl;

    return 0;
}
