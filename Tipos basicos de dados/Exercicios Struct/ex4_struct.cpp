#include <iostream>
#include <cstdlib> // Para malloc e free
using namespace std;

struct Carro {
    char modelo[30]; // String de até 30 caracteres
    int ano;
    float preco;
};

int main() {
    // Aloca memória dinamicamente para um Carro
    Carro* ptrCarro = (Carro*) malloc(sizeof(Carro));

    if (ptrCarro == NULL) {
        cout << "Falha na alocação de memória!" << endl;
        return 1;
    }

    // Preenche os dados
    cout << "Digite o modelo do carro: ";
    cin.getline(ptrCarro->modelo, 30);

    cout << "Digite o ano: ";
    cin >> ptrCarro->ano;

    cout << "Digite o preço: ";
    cin >> ptrCarro->preco;

    // Exibe os dados
    cout << "\nDados do Carro:" << endl;
    cout << "Modelo: " << ptrCarro->modelo << endl;
    cout << "Ano: " << ptrCarro->ano << endl;
    cout << "Preço: " << ptrCarro->preco << endl;

    // Libera a memória alocada
    free(ptrCarro);

    return 0;
}