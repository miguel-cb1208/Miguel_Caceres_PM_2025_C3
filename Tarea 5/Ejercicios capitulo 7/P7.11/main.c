#include <stdio.h>
#include <ctype.h>

void main(void)
{
   char P, cad[50];
   int n;
   printf("ingrese la cadena de caracteres (maximo 50): ");
   gets(cad);
   printf("\nIngrese la posicion en la cadena que desea verificar: ");
   scanf("%d", &n);
   if ((n >= 0) && (n < 50))
   {
       P = cad[n-1];
       if (islower(P))
        printf("\n%c es una letra minuscula", P);
       else
        printf("\n%c no es una letra minuscula", P);
   }
   else
    printf("\nEl valor ingresado de n es incorrecto");
}
