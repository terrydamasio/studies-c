#include <stdio.h>
#include <iostream>
#include <string.h>

int main()
{
    // Estrutura compostas heterogêneas -> conjunto de variáveis de tipos diferentes (Structs)

    // Declarando variáveis struct
    typedef struct {
        int idade;
        char nome[40];
        float salario;

    } Funcionario;

    Funcionario secretaria = {40, "Maria", 2500.00}; // declara uma variável do tipo Funcionario
    Funcionario funcionarios[10]; // declara um vetor de struct funcionarios

    Funcionario chefe; // declara uma variável do tipo Funcionario
    chefe.idade = 40;
    strcpy(chefe.nome, "Terry");
    chefe.salario = 5000.00;

    Funcionario empregado;
    std::cout << "insira a idade do empregado: \n";
    std::cin >> empregado.idade;


    // VETOR DE STRUCTS
    typedef struct {
        char cor[15];
        char modelo[20];
        int ano;
    } Carro;

    Carro c[3];
    strcpy(c[1].cor, "Preto"); 
    strcpy(c[1].modelo, "Golf"); 
    c[1].ano = 2025;

    std::cout << "A cor do carro é %c" << c[1].cor << "\n";
    std::cout << "A cor do carro é %c" << c[1].modelo << "\n";
    std::cout << "A cor do carro é %d" << c[1].ano << "\n";
    
    
    return 0;
}