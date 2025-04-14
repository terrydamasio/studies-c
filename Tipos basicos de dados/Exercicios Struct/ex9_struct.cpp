#include <iostream>

using namespace std;

struct Paciente {
    char nome[50];
    int idade;
    char diagnostico[100];
};

void mostrarAcimaDe60(Paciente pacientes[], int qtd) {
    for (int i = 0; i < qtd; i++) {
        if (pacientes[i].idade > 60) {
            cout << pacientes[i].nome << " - " << pacientes[i].idade << " anos - " << pacientes[i].diagnostico << endl;
        }
    }
}

int main() {
    Paciente pacientes[3] = {
        {"Joao", 45, "Gripe"},
        {"Maria", 70, "Hipertensao"},
        {"Carlos", 65, "Diabetes"}
    };

    mostrarAcimaDe60(pacientes, 3);

    return 0;
}
