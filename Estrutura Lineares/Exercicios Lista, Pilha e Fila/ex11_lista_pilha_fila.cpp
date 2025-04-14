#include <iostream>
#include <string>
using namespace std;

// Classe para representar um cliente
class Cliente {
public:
    int id;
    string nome;

    // Construtor para inicializar os dados do cliente
    Cliente(int id, string nome) {
        this->id = id;
        this->nome = nome;
    }
};

// Classe para implementar a fila de atendimento bancário
class Fila {
private:
    Cliente** fila;   // Ponteiro para um array de ponteiros de clientes
    int frente, tras, capacidade;

public:
    // Construtor para inicializar a fila com a capacidade informada
    Fila(int capacidade) {
        this->capacidade = capacidade;
        fila = new Cliente*[capacidade];  // Aloca memória para a fila
        frente = 0;
        tras = 0;
    }

    // Destruidor para desalocar a memória
    ~Fila() {
        for (int i = frente; i < tras; i++) {
            delete fila[i]; // Libera a memória de cada cliente
        }
        delete[] fila;
    }

    // Verifica se a fila está vazia
    bool isEmpty() {
        return frente == tras;
    }

    // Verifica se a fila está cheia
    bool isFull() {
        return tras == capacidade;
    }

    // Adiciona um cliente na fila
    void enqueue(Cliente* cliente) {
        if (isFull()) {
            cout << "Fila cheia! Não é possível adicionar o cliente." << endl;
        } else {
            fila[tras] = cliente;
            tras++;
        }
    }

    // Remove o cliente da frente da fila (atendimento)
    void dequeue() {
        if (isEmpty()) {
            cout << "Fila vazia! Não há clientes para atender." << endl;
        } else {
            cout << "Atendendo o cliente: " << fila[frente]->nome << endl;
            delete fila[frente];  // Libera a memória do cliente atendido
            frente++;
        }
    }

    // Exibe todos os clientes na fila
    void exibirFila() {
        if (isEmpty()) {
            cout << "Fila vazia!" << endl;
        } else {
            cout << "Clientes na fila: " << endl;
            for (int i = frente; i < tras; i++) {
                cout << "ID: " << fila[i]->id << " - Nome: " << fila[i]->nome << endl;
            }
        }
    }
};

int main() {
    Fila fila(5);  // Cria uma fila com capacidade para 5 clientes

    // Criando alguns clientes
    Cliente* cliente1 = new Cliente(1, "Carlos");
    Cliente* cliente2 = new Cliente(2, "Maria");
    Cliente* cliente3 = new Cliente(3, "João");
    Cliente* cliente4 = new Cliente(4, "Ana");

    // Enfileirando os clientes
    fila.enqueue(cliente1);
    fila.enqueue(cliente2);
    fila.enqueue(cliente3);
    fila.enqueue(cliente4);

    // Exibindo a fila
    fila.exibirFila();

    // Atendendo um cliente
    fila.dequeue();

    // Exibindo a fila após atendimento
    fila.exibirFila();

    // Criando mais clientes
    Cliente* cliente5 = new Cliente(5, "Paulo");
    fila.enqueue(cliente5);

    // Exibindo a fila final
    fila.exibirFila();

    // Atendendo todos os clientes
    fila.dequeue();
    fila.dequeue();
    fila.dequeue();
    fila.dequeue();

    // Exibindo a fila após atendimento de todos
    fila.exibirFila();

    return 0;
}
