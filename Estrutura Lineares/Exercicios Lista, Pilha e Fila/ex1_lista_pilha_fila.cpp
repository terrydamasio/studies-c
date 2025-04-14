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

    // Inserir no início
    void inserirInicio(int valor) {
        Node* novo = new Node();
        novo->data = valor;
        novo->next = head;
        head = novo;
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

    // Remover um elemento específico
    void removerElemento(int valor) {
        if (head == nullptr) {
            cout << "Lista vazia!" << endl;
            return;
        }

        if (head->data == valor) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != valor) {
            temp = temp->next;
        }

        if (temp->next == nullptr) {
            cout << "Elemento não encontrado!" << endl;
        } else {
            Node* remover = temp->next;
            temp->next = temp->next->next;
            delete remover;
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

    // Inserir elementos no início
    lista.inserirInicio(10);
    lista.inserirInicio(20);
    lista.inserirInicio(30);

    cout << "Lista após inserções no início: ";
    lista.exibirLista();

    // Inserir elementos no final
    lista.inserirFinal(40);
    lista.inserirFinal(50);

    cout << "Lista após inserções no final: ";
    lista.exibirLista();

    // Remover um elemento específico
    lista.removerElemento(20);
    cout << "Lista após remover o elemento 20: ";
    lista.exibirLista();

    lista.removerElemento(60); // Elemento não encontrado

    // Exibir lista final
    cout << "Lista final: ";
    lista.exibirLista();

    return 0;
}
