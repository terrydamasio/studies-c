#include <iostream>
#include <string>
using namespace std;

// Define a struct Aluno
struct Aluno {
    string nome;
    int matricula;
    float nota;
};

int main() {
    const int NUM_ALUNOS = 5;
    Aluno alunos[NUM_ALUNOS]; // Vetor de 5 alunos
    float somaNotas = 0.0;

    // Solicita os dados dos alunos
    for (int i = 0; i < NUM_ALUNOS; i++) {
        cout << "\nAluno " << i + 1 << ":" << endl;
        
        cout << "Nome: ";
        getline(cin, alunos[i].nome);
        
        cout << "Matrícula: ";
        cin >> alunos[i].matricula;
        
        cout << "Nota: ";
        cin >> alunos[i].nota;
        
        somaNotas += alunos[i].nota; // Acumula as notas
    }

    // Calcula a média
    float media = somaNotas / NUM_ALUNOS;

    // Exibe a média
    cout << "\nMédia das notas: " << media << endl;

    return 0;
}