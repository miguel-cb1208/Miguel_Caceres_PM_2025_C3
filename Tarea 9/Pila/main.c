typedef struct Pila {
    int datos[50];
    int top;
} Pila;

void initPila(Pila* p) { p->top = -1; }

void push(Pila* p, int x) {
    p->datos[++p->top] = x;
}

int pop(Pila* p) {
    return p->datos[p->top--];
}
