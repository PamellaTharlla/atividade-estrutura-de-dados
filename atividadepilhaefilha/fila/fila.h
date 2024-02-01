#ifndef FILA_H
#define FILA_H

#define MAX_TAM 10

typedef struct {
    int elementos[MAX_TAM];
    int frente;
    int tras;
} Fila;

Fila criaFila();
void esvaziaFila(Fila *fila);
int estaVazia(Fila *fila);
int estaCheia(Fila *fila);
void entra(Fila *fila, int elemento);
int sai(Fila *fila);

#endif
