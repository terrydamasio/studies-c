#include <iostream>
#include <string>
using namespace std;

struct Funcionario {
    string nome;
    string cargo;
    float salario;
};

int main() {
    int N;
    cout << "Quantos funcionários deseja cadastrar? ";
    cin >> N;

    // Aloca um vetor dinâmico de N funcionários
    Funcionario* funcionarios = new Funcionario[N];

    // Cadastra os funcionários
    for (int i = 0; i < N; i++) {
        cout << "\nFuncionário " << i + 1 << ":\n";
        cout << "Nome: ";
        getline(cin, funcionarios[i].nome);
        cout << "Cargo: ";
        getline(cin, funcionarios[i].cargo);
        cout << "Salário: R$ ";
        cin >> funcionarios[i].salario;
        cin.ignore(); // Limpa o buffer após ler o salário
    }

    // Exibe todos os funcionários cadastrados
    cout << "\n--- Lista de Funcionários ---\n";
    for (int i = 0; i < N; i++) {
        cout << "\nFuncionário " << i + 1 << ":\n";
        cout << "Nome: " << funcionarios[i].nome << endl;
        cout << "Cargo: " << funcionarios[i].cargo << endl;
        cout << "Salário: R$ " << funcionarios[i].salario << endl;
    }

    // Libera a memória alocada
    delete[] funcionarios;

    return 0;
}