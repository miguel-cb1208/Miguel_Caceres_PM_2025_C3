#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int dato;
    struct Nodo* sig;
} Nodo;

Nodo* insertar(Nodo* lista, int dato) {
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo->dato = dato;
    nuevo->sig = lista;
    return nuevo;
}

void mostrar(Nodo* lista) {
    while (lista) {
        printf("%d -> ", lista->dato);
        lista = lista->sig;
    }
    printf("NULL\n");
}
