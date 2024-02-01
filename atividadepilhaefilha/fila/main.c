#include "fila.h"
#include <stdio.h>

int main() {
    Fila minhaFila = criaFila();

    printf("A fila está vazia? %s\n", estaVazia(&minhaFila) ? "Sim" : "Não");
    printf("A fila está cheia? %s\n", estaCheia(&minhaFila) ? "Sim" : "Não");

    entra(&minhaFila, 10);
    entra(&minhaFila, 20);
    entra(&minhaFila, 30);

    printf("A fila está vazia? %s\n", estaVazia(&minhaFila) ? "Sim" : "Não");
    printf("A fila está cheia? %s\n", estaCheia(&minhaFila) ? "Sim" : "Não");

    printf("Elemento removido: %d\n", sai(&minhaFila));
    printf("Elemento removido: %d\n", sai(&minhaFila));

    esvaziaFila(&minhaFila);

    printf("A fila está vazia? %s\n", estaVazia(&minhaFila) ? "Sim" : "Não");

    return 0;
}
