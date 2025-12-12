typedef struct Cola {
    int datos[50];
    int frente, fin;
} Cola;

void initCola(Cola* c) {
    c->frente = c->fin = 0;
}

void enqueue(Cola* c, int x) {
    c->datos[c->fin++] = x;
}

int dequeue(Cola* c) {
    return c->datos[c->frente++];
}
