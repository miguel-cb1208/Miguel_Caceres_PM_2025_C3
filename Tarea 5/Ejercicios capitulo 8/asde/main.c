#include <stdio.h>
#include <string.h>
/* Estructuras-3.
El programa muestra la manera en que se declara una estructura anidada, así
como la forma de acceso a los campos de las variables o apuntadores de tipo
estructura, tanto para lectura como para escritura. Se utiliza además una
función que recibe como parámetro un apuntador de tipo estructura. */

typedef struct /* Declaración de la estructura domicilio utilizando
un typedef. */
{
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
} domicilio;

struct empleado /* Declaración de la estructura anidada empleado. */
{
    char nombre[20];
    char departamento[20];
    float sueldo;
    domicilio direccion; /* direccion es un campo de tipo estructura
    domicilio de la estructura empleado. */
};

void Lectura(struct empleado *a)
/* Función que permite leer los campos de un apuntador de tipo estructura
empleado. */
{
    printf("\nIngrese el nombre del empleado: ");
    gets(a->nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    gets(a->departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &a->sueldo);
    fflush(stdin);
    printf("----Ingrese la dirección del empleado----");
    printf("\n\tCalle: ");
    gets(a->direccion.calle);
    printf("\tNúmero: ");
    scanf("%d", &a->direccion.numero);
    printf("\tCódigo Postal: ");
    scanf("%d", &a->direccion.cp);
    fflush(stdin);
    printf("\tLocalidad: ");
    // --- LÍNEA FALTANTE ---
    gets(a->direccion.localidad);
} // --- LLAVE FALTANTE ---

// --- FUNCIÓN 'main' FALTANTE ---
int main()
{
    struct empleado e1; // Se declara una variable de tipo struct empleado

    // Se llama a la función Lectura, pasando la dirección de e1
    Lectura(&e1);

    // Se imprimen los datos para verificar
    printf("\n\n--- Datos del Empleado Registrados ---\n");
    printf("Nombre: %s\n", e1.nombre);
    printf("Departamento: %s\n", e1.departamento);
    printf("Sueldo: %.2f\n", e1.sueldo);
    printf("Dirección:\n");
    printf("\tCalle: %s\n", e1.direccion.calle);
    printf("\tNúmero: %d\n", e1.direccion.numero);
    printf("\tCódigo Postal: %d\n", e1.direccion.cp);
    printf("\tLocalidad: %s\n", e1.direccion.localidad);

    return 0;
}
