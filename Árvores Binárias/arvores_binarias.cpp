#include <stdio.h>
#include <stdlib.h>


int main() {
    // Árvores são modelos abstratos de estruturas de dados hierárquicas, compostas por nós com relações de parentesco (pai-filho)

    //folhas: nós que não possuem filhos
    //não podemos conectar a raiz de uma árvore diretamente a folha, a não ser que a árvore seja de nível = 1

    //Árvores binárias: cada nó só pode ter no máximo dois filhos (esquerda e direita)
    //A profundidade de uma raiz é a distância até a raiz
    //A altura de uma árvore é a distância entre a folha mais distante e a raiz
}

//definição da estrutura de um nó da arvore binária
typedef struct No {
    int valor;
    
    struct No* esquerda;
    struct No* direita;
    
} No;

//função para criar um novo nó
No* criarNo(int valor) {
    No* novoNo = (No*)malloc(sizeof(No));
    
    novoNo->valor = valor;
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;

    return novoNo; 
}

//Percursos em Árvore

void preOrdem(No* raiz) { // raiz, esquerda, direita
    if (raiz != NULL) {
        printf("%d ", raiz->valor);
        preOrdem(raiz->esquerda);
        preOrdem(raiz->direita);
    }
}

void emOrdem(No* raiz) { // esquerda, raiz, direita  
    if (raiz != NULL) {
        emOrdem(raiz->esquerda);
        printf("%d ", raiz->valor);
        emOrdem(raiz->direita);
    }
}


void posOrdem(No* raiz) { // esquerda, direita, raiz  
    if (raiz != NULL) {
        posOrdem(raiz->esquerda);
        posOrdem(raiz->direita);
        printf("%d ", raiz->valor);
    }
}