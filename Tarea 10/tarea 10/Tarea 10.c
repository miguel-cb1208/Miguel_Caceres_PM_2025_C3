#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Libro {
    int ano;
    char autor[100];
    char titulo[100];
    char descripcion[200];
    float precio;
    int codigo;

    struct Libro* siguiente;
} Libro;


Libro* cargarDesdeArchivo();
void guardarEnArchivo(Libro* lista);
Libro* agregarLibro(Libro* lista);
void mostrarLista(Libro* lista);
void buscar(Libro* lista);
void liberarMemoria(Libro* lista);

int main() {
    Libro* lista = NULL;
    int opcion;

    lista = cargarDesdeArchivo();

do {
    printf("\n====== MENU ======\n");
    printf("1. Agregar Libro\n");
    printf("2. Mostrar Lista\n");
    printf("3. Buscar por Titulo o Autor\n");
    printf("4. Guardar y Salir\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);
    getchar();

switch(opcion) {
            case 1:
                lista = agregarLibro(lista);
                break;
            case 2:
                mostrarLista(lista);
                break;
            case 3:
                buscar(lista);
                break;
            case 4:
                guardarEnArchivo(lista);
                liberarMemoria(lista);
                printf("Datos guardados. Saliendo...\n");
                break;
            default:
                printf("Opcion invalida\n");
        }

    } while(opcion != 4);

    return 0;
}

/*CARGAR DESDE ARCHIVO*/
Libro* cargarDesdeArchivo() {
    FILE* f = fopen("libros.txt", "r");
    if (!f) return NULL;

    Libro *lista = NULL, *nuevo, *temp;
    while (!feof(f)) {
        nuevo = (Libro*) malloc(sizeof(Libro));
        if (fscanf(f, "%d;%99[^;];%99[^;];%199[^;];%f;%d\n",
                   &nuevo->ano, nuevo->autor, nuevo->titulo,
                   nuevo->descripcion, &nuevo->precio, &nuevo->codigo) == 6) {

            nuevo->siguiente = NULL;

            if (!lista) {
                lista = nuevo;
            } else {
                temp = lista;
                while (temp->siguiente) temp = temp->siguiente;
                temp->siguiente = nuevo;
            }
        } else {
            free(nuevo);
            break;
        }
    }

    fclose(f);
    return lista;
}

/*GUARDAR EN ARCHIVO*/
void guardarEnArchivo(Libro* lista) {
    FILE* f = fopen("libros.txt", "w");
    if (!f) return;

    Libro* temp = lista;
    while (temp) {
        fprintf(f, "%d;%s;%s;%s;%.2f;%d\n",
                temp->ano, temp->autor, temp->titulo,
                temp->descripcion, temp->precio, temp->codigo);
        temp = temp->siguiente;
    }

    fclose(f);
}

/*AGREGAR LIBRO*/
Libro* agregarLibro(Libro* lista) {
    Libro* nuevo = (Libro*) malloc(sizeof(Libro));

    printf("Ano: ");
    scanf("%d", &nuevo->ano); getchar();

    printf("Autor: ");
    fgets(nuevo->autor, 100, stdin);
    nuevo->autor[strcspn(nuevo->autor, "\n")] = 0;

    printf("Titulo: ");
    fgets(nuevo->titulo, 100, stdin);
    nuevo->titulo[strcspn(nuevo->titulo, "\n")] = 0;

    printf("Descripcion: ");
    fgets(nuevo->descripcion, 200, stdin);
    nuevo->descripcion[strcspn(nuevo->descripcion, "\n")] = 0;

    printf("Precio: ");
    scanf("%f", &nuevo->precio); getchar();

    printf("Codigo: ");
    scanf("%d", &nuevo->codigo); getchar();

    nuevo->siguiente = NULL;

    if (!lista) return nuevo;

    Libro* temp = lista;
    while (temp->siguiente) temp = temp->siguiente;
    temp->siguiente = nuevo;

    return lista;
}

/*MOSTRAR LISTA COMPLETA*/
void mostrarLista(Libro* lista) {
    Libro* temp = lista;

    if (!temp) {
        printf("\nNo hay libros registrados.\n");
        return;
    }

    while (temp) {
        printf("\n--- Libro ---\n");
        printf("Ano: %d\n", temp->ano);
        printf("Autor: %s\n", temp->autor);
        printf("Titulo: %s\n", temp->titulo);
        printf("Descripcion: %s\n", temp->descripcion);
        printf("Precio: %.2f\n", temp->precio);
        printf("Codigo: %d\n", temp->codigo);
        temp = temp->siguiente;
    }
}

/* BUSCAR LIBRO*/
void buscar(Libro* lista) {
    char criterio[100];
    int encontrado = 0;

    printf("Ingrese autor o titulo a buscar: ");
    fgets(criterio, 100, stdin);
    criterio[strcspn(criterio, "\n")] = 0;

    Libro* temp = lista;
    while (temp) {
        if (strstr(temp->titulo, criterio) || strstr(temp->autor, criterio)) {
            printf("\n--- Libro Encontrado ---\n");
            printf("Ano: %d\n", temp->ano);
            printf("Autor: %s\n", temp->autor);
            printf("Titulo: %s\n", temp->titulo);
            printf("Descripcion: %s\n", temp->descripcion);
            printf("Precio: %.2f\n", temp->precio);
            printf("Codigo: %d\n", temp->codigo);
            encontrado = 1;
        }
        temp = temp->siguiente;
    }

    if (!encontrado)
        printf("\nNo se encontraron resultados.\n");
}

/*LIBERAR MEMORIA*/
void liberarMemoria(Libro* lista) {
    Libro* temp;
    while (lista) {
        temp = lista;
        lista = lista->siguiente;
        free(temp);
    }
}
