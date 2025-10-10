#include <stdio.h>
#include <stdlib.h>

const int MAX=100;
void lectura(int, int);
int busca(int *, int, int);

void main(void)
{
   int RES, ELE, TAM, VEC[MAX];
   do
   {
       printf("Ingrese el zize del arreglo: ");
       scanf("%d", &TAM);
   }
   while (TAM > MAX || TAM < 1);
   lectura(VEC, TAM);
   printf("\ningrese el elemento a buscar:");
   scanf("%d", &ELE);
   RES = busca(VEC, TAM, ELE);
   if (RES)
    printf("\nEl elemento se encuentra en la posicion: %d", RES);
   else
    printf("\n El elemento no se encuentra en el arreglo");

}
void lectura(int A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%d", &A[I]);
    }
}
