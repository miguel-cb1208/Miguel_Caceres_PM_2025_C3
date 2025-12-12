typedef struct Arbol {
    int dato;
    struct Arbol *izq, *der;
} Arbol;

Arbol* insertarBST(Arbol* raiz, int dato) {
    if (!raiz) {
        raiz = (Arbol*)malloc(sizeof(Arbol));
        raiz->dato = dato;
        raiz->izq = raiz->der = NULL;
    } else if (dato < raiz->dato)
        raiz->izq = insertarBST(raiz->izq, dato);
    else
        raiz->der = insertarBST(raiz->der, dato);
    return raiz;
}

void inorder(Arbol* raiz) {
    if (!raiz) return;
    inorder(raiz->izq);
    printf("%d ", raiz->dato);
    inorder(raiz->der);
}
