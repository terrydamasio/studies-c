#include <stdio.h>

int main () {
    
    // Estrutura compostas homogêneas -> conjunto de variáveis de tipos iguais

    int numeros[5] = {1, 2, 3, 4, 5}; // array de inteiros
    char letras[3] = {'A', 'B', 'C'}; // array de caracteres

    int matriz[2][3] = {{1,2,3}, {4,5,6}}; // matriz 2x3

    printf("Letra %d\n", numeros[2]);
    printf("Letra %c\n", letras[0]);
    printf("Elemento da primeira linha e segunda coluna da matriz %d\n", matriz[0][1]);

    return 0;
}
