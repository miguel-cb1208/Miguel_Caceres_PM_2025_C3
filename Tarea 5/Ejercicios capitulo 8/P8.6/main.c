#include <stdio.h>
#include <string.h>

typedef struct
{
    int Clave;
    char nombre[15];
    float precio;
    int existencia;
} producto;

void Lectura(producto *, int);
void ventas(producto *, int);
void reabastecimiento(producto *, int);
void Nuevo_Productos(producto *, int *);
void Inventario(producto *, int);

void main(void)
{
   producto INV[100];
   int TAM, OPE;
   do
    {
    printf("Ingrese el numero de productos: ");
   }
   while (TAM > 100 || TAM < 1);
   Lectura(INV, TAM);
   printf("\nIngrese operacion a realizar. \n\t\t1 -Ventas \n\t\t 2 -3 - Nuevos Productos \n\t\t 4 - Inventario \n\t\t 0 -Salir: ");
   scanf("%d", &OPE);
   while (OPE)
   {
       switch (OPE)
       {
           case 1: ventas(INV, TAM);
           break;
               case 2: reabastecimiento(INV, TAM);
               break;
               case 3: Nuevos_Productos(INV, &TAM);
               break;
               case 4: Inventario(INV, TAM);
               break;

       };
       printf("\nIngrese operacion a realizar. \n\t\t1 - Ventas \n\t\t 2 - Reabastecimiento \n\t\t 3 - Nuevos Productos \n\t\t 4 - Inventario \n\t\t 0 - Salir: ");
       scanf("%d", &OPE);

   }
}

void Lectura(producto A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("\nIngrese informacion del producto %d", I+1);
        printf("\n\tClave: ");
        scanf("%d", &A[I].Clave);
        fflush(stdin);
        printf("\tNombre: ");
        gets(A[I].Nombre);
        printf("\tPresio: ");
        scanf("%f", &A[I].precio);
        printf("\tExistencia: ");
        scanf("%d", &A[I].existencia);
    }
}

void Ventas(producto A[], int T)
{
    int CLA, CAN, I, RES;
    float TOT, PAR;
    printf("\nIngrese clave del producto -0 para salir-: ");
    scanf("%d", CLA);
    TOT = 0.0;
    while (CLA)
    {
        printf("\tCantidad: ");
        scanf("%d", &CLA);
        I = 0;
        while ((I < T) && (A[I].Clave < CLA))
            I++;
        if ((I == T) || (A[I].Clave > CLA))
            printf("\nLa clave del producto es incorrecta");
        else
            if (A[I].existencia >= CAN)
        {
            A[I].existencia -= CAN;
            PAR = A[I].precio * CAN;
            TOT += PAR;
        }
        else
        {
            printf("\nNo existe en inventario la cantidad solicitada. solo hay %d", A[I].existencia);
            printf("\n Los lleva 1 - si     0 - no?:");
            scanf("%d", &RES);
            if (RES)
            {
                PAR =A[I].precio * A[I].existencia;
                A[I].existencia = 0;
                TOT += PAR;
            }
        }
        printf("\nIngrese la siquiente clave del producto -0 para salir-: ");
        scanf("%d", &CLA);
    }
    printf("\nTotal de la venta: %f", TOT);
}

void reabastecimiento(producto A[], int T)
{
    int CLA, CAN, I;
    printf("\nIngrese clave del producto -0 para salir-: ");
    scanf("%d", &CLA);
    while (CLA)
    {
        I = 0;
        while ((I < T) && (A[I].Clave < CLA))
            I++;
        if ((I == T) || (A[I].Clave > CLA))
            printf("\nLa clave del producto ingresada es incorrecta ");
        else
        {
            printf("\tCantidad: ");
            scanf("%d", &CAN);
            A[I].existencia += CAN;
        }
        printf("\nIngresa otra clave del producto -0 para salir-: ");
        scanf("%d", &CLA);
    }
}

void Nuevo_Productos(producto A[], int *T)
{
    int CLA, I, J;
    printf("\nIngrese clave del producto -0 para salir-: ");
    scanf("%d", &CLA);
    while ((*T < 30) && (CLA))
    {
        I=0;
        while ((I < *T) && (a[I].Clave < CLA))
            I++;
        if (I == *T)
        {
            A[I].Clave = CLA;
            printf("\tNombre: ");
            fflush(stdin);
            gets(A[I].Nombre);
            printf("\tPrecio:");
            scanf("%f", &A[I].precio);
            printf("\tCantidad: ");
            scanf("%d", &A[I].existencia);
            *T = *T + 1;
        }
        else
            if (A[I].Clave == CLA)
            printf("\nEl producto ya se encuentra en el inventario");
        else
        {
            for (J=*T; J>I; J--)
                A[J] = A[J-1];
            A[I].clave = CLA;
            printf("\tNombre: ");
            fflush(stdin);
            gets(A[I].Nombre);
            printf("\tPrecio:");
            scanf("%f", &A[I].precio);
            scanf("%d", &A[I].existencia);
            *T = *T + 1;
        }
        printf("\nIngrese otra clave de producto -0 para salir-: ");
        scanf("%d", &CLA);
    }
    if (*T == 30)
        printf("\nYa no hay espacio para incorporar nuevos productos");
}

void Inventario(producto A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("\nClave: %d", A[I].Clave);
        printf("\t Nombre: %s", A[I].nombre);
        printf("\tPrecio: %d", A[I].precio);
        printf("\tExistencia: %d \n", A[I].existencia);
    }
}
