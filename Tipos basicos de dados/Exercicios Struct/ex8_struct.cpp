#include <iostream>
using namespace std;

struct Retangulo {
    float base;
    float altura;
};

// Função para calcular a área
float calcularArea(Retangulo r) {
    return r.base * r.altura;
}

// Função para calcular o perímetro
float calcularPerimetro(Retangulo r) {
    return 2 * (r.base + r.altura);
}

int main() {
    Retangulo ret;
    
    cout << "Digite a base do retângulo: ";
    cin >> ret.base;
    
    cout << "Digite a altura do retângulo: ";
    cin >> ret.altura;
    
    // Calcula e exibe os resultados
    cout << "\nÁrea: " << calcularArea(ret) << endl;
    cout << "Perímetro: " << calcularPerimetro(ret) << endl;
    
    return 0;
}