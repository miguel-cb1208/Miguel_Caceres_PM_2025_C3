#define TAM 10

typedef struct NodoHash {
    int clave;
    struct NodoHash* sig;
} NodoHash;

NodoHash* tabla[TAM];

int hash(int clave) {
    return clave % TAM;
}

void insertarHash(int clave) {
    int pos = hash(clave);
    NodoHash* nuevo = (NodoHash*)malloc(sizeof(NodoHash));
    nuevo->clave = clave;
    nuevo->sig = tabla[pos];
    tabla[pos] = nuevo;
}

void mostrarHash() {
    for (int i = 0; i < TAM; i++) {
        printf("[%d]: ", i);
        NodoHash* temp = tabla[i];
        while (temp) {
            printf("%d -> ", temp->clave);
            temp = temp->sig;
        }
        printf("NULL\n");
    }
}
