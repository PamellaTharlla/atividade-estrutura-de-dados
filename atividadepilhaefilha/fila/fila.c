#include "fila.h"
#include <stdio.h>

Fila criaFila() {
    Fila novaFila;
    novaFila.frente = 0;
    novaFila.tras = -1;
    return novaFila;
}

void esvaziaFila(Fila *fila) {
    fila->frente = 0;
    fila->tras = -1;
}

int estaVazia(Fila *fila) {
    return fila->tras < fila->frente;
}

int estaCheia(Fila *fila) {
    return fila->tras == MAX_TAM - 1;
}

void entra(Fila *fila, int elemento) {
    if (!estaCheia(fila)) {
        fila->tras++;
        fila->elementos[fila->tras] = elemento;
    } else {
        printf("Erro: Fila cheia, não é possível adicionar elemento.\n");
    }
}

int sai(Fila *fila) {
    if (!estaVazia(fila)) {
        int elementoRemovido = fila->elementos[fila->frente];
        fila->frente++;
        return elementoRemovido;
    } else {
        printf("Erro: Fila vazia, não é possível remover elemento.\n");
        return -1; // Valor de erro
    }
}
