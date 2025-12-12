#define MAX 10

typedef struct NodoG {
    int destino;
    struct NodoG* sig;
} NodoG;

NodoG* grafo[MAX];

void agregarArista(int origen, int destino) {
    NodoG* nuevo = (NodoG*)malloc(sizeof(NodoG));
    nuevo->destino = destino;
    nuevo->sig = grafo[origen];
    grafo[origen] = nuevo;
}

void mostrarGrafo() {
    for (int i = 0; i < MAX; i++) {
        printf("Nodo %d: ", i);
        NodoG* temp = grafo[i];
        while (temp) {
            printf("%d -> ", temp->destino);
            temp = temp->sig;
        }
        printf("NULL\n");
    }
}
