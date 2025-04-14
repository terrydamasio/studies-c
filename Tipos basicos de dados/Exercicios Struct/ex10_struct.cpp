#include <iostream>

using namespace std;

struct ContaBancaria {
    char nome[50];
    int numeroConta;
    float saldo;
};

void depositar(ContaBancaria &conta, float valor) {
    conta.saldo += valor;
    cout << "Depósito realizado com sucesso.\n";
}

void sacar(ContaBancaria &conta, float valor) {
    if (valor <= conta.saldo) {
        conta.saldo -= valor;
        cout << "Saque realizado com sucesso.\n";
    } else {
        cout << "Saldo insuficiente.\n";
    }
}

void exibirSaldo(ContaBancaria conta) {
    cout << "Saldo atual: R$ " << conta.saldo << endl;
}

int main() {
    ContaBancaria conta;

    // Cadastro da conta
    cout << "Digite o nome do titular: ";
    cin.getline(conta.nome, 50);
    cout << "Digite o número da conta: ";
    cin >> conta.numeroConta;
    conta.saldo = 0.0;

    int opcao;
    float valor;

    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Depositar\n";
        cout << "2. Sacar\n";
        cout << "3. Exibir Saldo\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                cout << "Valor para depositar: R$ ";
                cin >> valor;
                depositar(conta, valor);
                break;
            case 2:
                cout << "Valor para sacar: R$ ";
                cin >> valor;
                sacar(conta, valor);
                break;
            case 3:
                exibirSaldo(conta);
                break;
            case 0:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opção inválida.\n";
        }

    } while (opcao != 0);

    return 0;
}
