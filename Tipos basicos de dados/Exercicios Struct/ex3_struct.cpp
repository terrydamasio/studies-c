#include <iostream>
#include <string>
using namespace std;

struct Produto {
    string nome;
    int codigo;
    float preco;
};

void exibirProduto(Produto p) {
    cout << "\nDados do Produto:\n";
    cout << "Nome: " << p.nome << endl;
    cout << "Codigo: " << p.codigo << endl;
    cout << "Preco: " << p.preco << endl;
}

int main() {
    Produto p;

    cout << "Digite o nome do produto: ";
    getline(cin, p.nome);

    cout << "Digite o codigo: ";
    cin >> p.codigo;

    cout << "Digite o preco: ";
    cin >> p.preco;

    exibirProduto(p);

    return 0;
}