#include <iostream>
#include <string>

using namespace std;

// Definindo a struct Pessoa
struct Pessoa {
    string nome;    // String para o nome (até 50 caracteres)
    int idade;      // Inteiro para a idade
    float altura;   // Float para a altura
};

int main() {
    Pessoa pessoa;  // Declara uma variável do tipo Pessoa

    // Solicita e armazena os dados
    cout << "Digite o nome: ";
    getline(cin, pessoa.nome);  // Lê uma linha inteira (incluindo espaços)

    cout << "Digite a idade: ";
    cin >> pessoa.idade;

    cout << "Digite a altura (em metros): ";
    cin >> pessoa.altura;

    // Exibe os dados armazenados
    cout << "\nDados da Pessoa:" << endl;
    cout << "Nome: " << pessoa.nome << endl;
    cout << "Idade: " << pessoa.idade << " anos" << endl;
    cout << "Altura: " << pessoa.altura << " m" << endl;

    return 0;
}