#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    
    struct No* esquerda;
    struct No* direita;
    
} No;

No* criarNo(int valor) {
    No* novoNo = (No*)malloc(sizeof(No));
    
    novoNo->valor = valor;
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;

    return novoNo; 
}

void preOrdem(No* raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->valor);
        preOrdem(raiz->esquerda);
        preOrdem(raiz->direita);
    }
}

void emOrdem(No* raiz) {  
    if (raiz != NULL) {
        emOrdem(raiz->esquerda);
        printf("%d ", raiz->valor);
        emOrdem(raiz->direita);
    }
}


void posOrdem(No* raiz) { 
    if (raiz != NULL) {
        posOrdem(raiz->esquerda);
        posOrdem(raiz->direita);
        printf("%d ", raiz->valor);
    }
}

int main() {
    int valor_raiz = 15;
    int valor_esquerda = 10;
    int valor_direita = 50;
    int valor_direita_esquerda = 20;

    No* raiz = criarNo(valor_raiz);
    raiz->esquerda = criarNo(valor_esquerda);
    raiz->direita = criarNo(valor_direita);
    raiz->direita->esquerda = criarNo(valor_direita_esquerda);

    printf("Pre-Ordem: \n");
    preOrdem(raiz);
    printf("\nEm-Ordem: \n");
    emOrdem(raiz);
    printf("\nPos-Ordem: \n");
    posOrdem(raiz);
    printf("\n");

    return 0;
}