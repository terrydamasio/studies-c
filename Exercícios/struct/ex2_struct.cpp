#include <stdio.h>
#include <iostream>
#include <stdlib.h>

typedef struct {
    char nome[15];
    float nota_math; 
    float nota_fisica;
    float media; 
} Alunos;

int main() {    
    Alunos Alunos[3];

    for (int i = 0; i < 3; i++) {

        std::cout << "=======================\n";
        std::cout << "Aluno " << i + 1 << ": \n";
        
        std::cout << "Digite o nome do aluno: ";
        std::cin >> Alunos[i].nome;
        
        std::cout << "Digite a nota de matematica do aluno: ";
        std::cin >> Alunos[i].nota_math;
        
        std::cout << "Digite a nota de fisica do aluno: ";
        std::cin >> Alunos[i].nota_fisica;

        Alunos[i].media = (Alunos[i].nota_fisica + Alunos[i].nota_math) / 2;
        
        std::cout << "Nota do aluno " << i + 1 << ": " << Alunos[i].media << "\n";
        std::cout << "=======================\n\n";
    }

    return 0;
}
