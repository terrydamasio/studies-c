#include <iostream>
#include <string>
using namespace std;

struct Contato {
    string nome;
    string telefone;
};

const int MAX_CONTATOS = 100; // Limite máximo de contatos
Contato agenda[MAX_CONTATOS];
int totalContatos = 0;

void adicionarContato() {
    if (totalContatos >= MAX_CONTATOS) {
        cout << "Agenda cheia! Não é possível adicionar mais contatos.\n";
        return;
    }
    
    cout << "\nNovo Contato:\n";
    cout << "Nome: ";
    getline(cin, agenda[totalContatos].nome);
    cout << "Telefone: ";
    getline(cin, agenda[totalContatos].telefone);
    
    totalContatos++;
    cout << "Contato adicionado com sucesso!\n";
}

void buscarContato() {
    string nomeBusca;
    cout << "\nDigite o nome para buscar: ";
    getline(cin, nomeBusca);
    
    bool encontrado = false;
    for (int i = 0; i < totalContatos; i++) {
        if (agenda[i].nome.find(nomeBusca) != string::npos) {
            cout << "\nContato encontrado:\n";
            cout << "Nome: " << agenda[i].nome << endl;
            cout << "Telefone: " << agenda[i].telefone << endl;
            encontrado = true;
        }
    }
    
    if (!encontrado) {
        cout << "Nenhum contato encontrado com esse nome.\n";
    }
}

int main() {
    int opcao;
    
    do {
        cout << "\n--- Agenda Telefônica ---\n";
        cout << "1. Adicionar Contato\n";
        cout << "2. Buscar Contato\n";
        cout << "3. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore(); // Limpa o buffer
        
        switch (opcao) {
            case 1:
                adicionarContato();
                break;
            case 2:
                buscarContato();
                break;
            case 3:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opção inválida!\n";
        }
    } while (opcao != 3);
    
    return 0;
}