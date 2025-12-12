#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char nombre[50];
    int cantidad;
    float precio;
} Producto;


void cargar_inventario(Producto **inventario_ptr, int *num_productos_ptr, const char *nombre_archivo) {
    FILE *archivo = fopen(nombre_archivo, "r");
    if (!archivo) {
     printf(" No se encontro '%s'. Iniciando inventario vacio.\n", nombre_archivo);
      *inventario_ptr = NULL;
        *num_productos_ptr = 0;
        return;
    }

    int count = 0;
     char linea[100];
      while (fgets(linea, sizeof(linea), archivo) != NULL) {
        count++; // Contar productos para asignar memoria inicialmente
    }

    rewind(archivo); // Volver al inicio

    *inventario_ptr = (Producto *)malloc(count * sizeof(Producto));
      if (*inventario_ptr == NULL) {
        perror("Error al asignar memoria inicial");
        exit(EXIT_FAILURE);
    }

    *num_productos_ptr = 0;

    // Leer los datos
    while (fscanf(archivo, "%49[^,],%d,%f\n", (*inventario_ptr)[*num_productos_ptr].nombre,
                                            &(*inventario_ptr)[*num_productos_ptr].cantidad,
                                            &(*inventario_ptr)[*num_productos_ptr].precio) == 3) {
        (*num_productos_ptr)++;
    }

    fclose(archivo);
     printf("Inventario cargado. Total de productos: %d\n", *num_productos_ptr);
}

void agregar_producto(Producto **inventario_ptr, int *num_productos_ptr) {
    char respuesta;
      printf("\n Desea escribir un producto nuevo en el inventario (s/n) ");
       if (scanf(" %c", &respuesta) != 1 || (respuesta != 's' && respuesta != 'S')) {
        return;
    }

    Producto *temp = (Producto *)realloc(*inventario_ptr, ((*num_productos_ptr) + 1) * sizeof(Producto));

    if (temp == NULL) {
     perror("Error al reasignar memoria");
        return;
    }

    *inventario_ptr = temp;
      Producto *nuevo = &(*inventario_ptr)[*num_productos_ptr];

    while (getchar() != '\n'); // Limpiar buffer

    printf("--- Nuevo Producto ---\n");
    printf("Nombre: ");
     fgets(nuevo->nombre, sizeof(nuevo->nombre), stdin);
     nuevo->nombre[strcspn(nuevo->nombre, "\n")] = 0; // Quitar salto de línea

    printf("Cantidad: ");
     if (scanf("%d", &nuevo->cantidad) != 1) return;

    printf("Precio: ");
     if (scanf("%f", &nuevo->precio) != 1) return;

     (*num_productos_ptr)++;
    printf(" Producto '%s' añadido.\n", nuevo->nombre);
}

void imprimir_inventario(const Producto *inventario, int num_productos) {
    char respuesta;

    printf("\n Desea imprimir los productos en inventario (s/n)? ");
     if (scanf(" %c", &respuesta) != 1 || (respuesta != 's' && respuesta != 'S')) {
        return;
    }

     if (num_productos == 0) {
        printf("\n El inventario está vacío.\n");
         return;
    }

    printf("\n==================================================\n");
    printf("| %-20s | %-10s | %-10s |\n", "Nombre", "Cantidad", "Precio");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < num_productos; i++) {
        printf("| %-20s | %-10d | $%-9.2f |\n", inventario[i].nombre, inventario[i].cantidad, inventario[i].precio);
    }
    printf("==================================================\n");
}

// Función auxiliar para guardar
void guardar_inventario(const Producto *inventario, int num_productos, const char *nombre_archivo) {
    FILE *archivo = fopen(nombre_archivo, "w");
      if (!archivo) {
        perror(" Error al abrir el archivo para guardar");
         return;
    }
    for (int i = 0; i < num_productos; i++) {
        fprintf(archivo, "%s,%d,%.2f\n", inventario[i].nombre, inventario[i].cantidad, inventario[i].precio);
    }
    fclose(archivo);
       printf("\n Inventario guardado en '%s'.\n", nombre_archivo);
}


int main() {
    Producto *inventario = NULL; // Puntero inicial para la memoria dinámica
    int num_productos = 0;
    const char *nombre_archivo = "inventario.txt";

    cargar_inventario(&inventario, &num_productos, nombre_archivo);
    agregar_producto(&inventario, &num_productos);
    imprimir_inventario(inventario, num_productos);
    guardar_inventario(inventario, num_productos, nombre_archivo);

    free(inventario);
    inventario = NULL;

    printf("\nPrograma finalizado. Memoria dinámica liberada.\n");

    return 0;
}
