#include <stdio.h>
#include <iostream>

// procedimentos não tem retorno (void)
void nome_procedimento(int parametro_1, double parametro_2);

// funções tem retorno
double nome_funcao(int parametro_1, double parametro_2) {

    //corpo função
    int result = parametro_1 + parametro_2;
    return result;
}


int main () {


    nome_procedimento(1, 2.3);

    int resultado = nome_funcao(1, 2);
    std::cout<<"A soma é:"  <<  resultado << ". \n";
    
    return 0;
}