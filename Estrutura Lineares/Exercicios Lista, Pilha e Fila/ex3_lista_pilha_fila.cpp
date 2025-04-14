#include <iostream>
using namespace std;

// Estrutura de um nó da lista
struct Node {
    int data;
    Node* next;
};

// Classe para a lista encadeada
class ListaEncadeada {
private:
    Node* head;

public:
    // Construtor
    ListaEncadeada() {
        head = nullptr;
    }

    // Inserir elemento de forma ordenada
    void inserirOrdenado(int valor) {
        Node* novo = new Node();
        novo->data = valor;
        novo->next = nullptr;

        // Se a lista estiver vazia ou o valor for menor que o primeiro elemento
        if (head == nullptr || head->data >= valor) {
            novo->next = head;
            head = novo;
        } else {
            Node* temp = head;
            // Encontrar a posição correta para o valor
            while (temp->next != nullptr && temp->next->data < valor) {
                temp = temp->next;
            }
            novo->next = temp->next;
            temp->next = novo;
        }
    }

    // Exibir todos os elementos da lista
    void exibirLista() {
        if (head == nullptr) {
            cout << "Lista vazia!" << endl;
            return;
        }

        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Destruidor para liberar memória
    ~ListaEncadeada() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    ListaEncadeada lista;

    // Inserir elementos na lista de forma ordenada
    lista.inserirOrdenado(30);
    lista.inserirOrdenado(10);
    lista.inserirOrdenado(50);
    lista.inserirOrdenado(40);
    lista.inserirOrdenado(20);

    cout << "Lista ordenada: ";
    lista.exibirLista();

    return 0;
}
