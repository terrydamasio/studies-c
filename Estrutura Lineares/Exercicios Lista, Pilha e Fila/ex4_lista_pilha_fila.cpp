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

    // Inserir no final
    void inserirFinal(int valor) {
        Node* novo = new Node();
        novo->data = valor;
        novo->next = nullptr;

        if (head == nullptr) {
            head = novo;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
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

    // Reverter a lista encadeada
    void reverterLista() {
        Node* anterior = nullptr;
        Node* atual = head;
        Node* seguinte = nullptr;

        while (atual != nullptr) {
            // Armazenar o próximo nó
            seguinte = atual->next;
            // Reverter o ponteiro "next" do nó atual
            atual->next = anterior;
            // Avançar os ponteiros
            anterior = atual;
            atual = seguinte;
        }
        // Atualizar o head para o novo primeiro nó
        head = anterior;
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

    // Inserir elementos no final
    lista.inserirFinal(10);
    lista.inserirFinal(20);
    lista.inserirFinal(30);
    lista.inserirFinal(40);
    lista.inserirFinal(50);

    cout << "Lista original: ";
    lista.exibirLista();

    // Reverter a lista
    lista.reverterLista();

    cout << "Lista revertida: ";
    lista.exibirLista();

    return 0;
}
