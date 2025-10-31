#include <stdio.h>
#include <stdlib.h>

int main(void)
{
 char p1, p2, p3 = '$';
 /*Declaracion de las variables tipo caracter p1, p2 y p3 se le
 asigna el simbolo $*/
 printf("\n ingrese un caracter: ");
 p1=getchar(); /* Se utiliza la funcion getchar para leer un caracter. */
 putchar(p1);   /* Se utiliza la funcion putchar para escribir un
 caracter. */
 printf("\n");
 /* Luego de leer un caracter siempre es conveniente escribir ;a funcion fflush
 para limpiar el bufer, por que generalmente queda con basura y genera un error
 en la ejecucion  del programa. El error se produce porque cuando se ingresa un
 dato se oprime el return y luego cuando volvemos a leer un caracter o una
 cadena de caracteres se toma a ese return como el nuevo dato ingresado. */

 printf("\nEl caracter p3 es: ");
 putchar(p3);
 /* Se utiliza la funcion putchar para escribir el caracter almacenado en p3. */
 printf("\n");
 printf("nIngrese  otro caracter: ");
 fflush(stdin);
 scanf("%c, &p2");
 /* Se puede utilizar scanf con el formato de variable %c para leer un caracter. */
 printf("%c", p2);
/* Se puede utilizar printf con el formato de variable %c para escribir un
caracter. */
}
