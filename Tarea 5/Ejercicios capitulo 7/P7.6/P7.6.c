#include <stdio.h>
#include <stdlib.h>

void main(void)
{
 char *cad0 = "Hola mexico";
 char cad1[20], cad2[20], cad3[20] = ", buenos dias!!!";

 strcpy(cad1, cad0);
 printf("\nPrueba de la funcion strcpy. se copia la cadena cad0 a cad1: %s\n", cad1);

 strcpy(cad1, "XX");
 printf("\nPrueba de la funcion strcpy. se copia la cadena XX a cad1: %s\n", cad1);

 strncpy(cad2, cad0, 4);
 cad2[4] = '\0';
 printf("\nPrueba de la funcion strncpy. se copian 4 caracteres de cad0 a cad2: %s\n", cad2);

 strncpy(cad2, cad3, 3);
 cad2[3] = '\0';
 printf("\n Prueba de la funcion strncpy. se copian 3 caracteres de cad3 a cad2 %s\n", cad2);

 strcat(cad0, cad3);
 printf("\n Prueba de la funcion strcat. se incorporan la cadena cad3 a cad0: %s\n", cad0);

 strcat(cad1, "YY");
 printf("\nPrueba de la funcion strcat. se incorpora la cadena YY a cad1: %s\n", cad1);

 strcat(cad2, "");
 strncat(cad2, cad0,4);
 printf("\nPrueba de la funcion strncat. se incorporan 4 caracteres de cad0 a cad2: %s\n", cad2);

 cad0 = strstr(cad0, "Mexico");
 printf("\nPrueba de la funcion strstr. se trata de localizar la cadena Mexico dentro de cad0: %s\n", cad0);

 cad0 = strstr(cad0, "Guatemala");
 printf("\nPrueba de la funcion strstr. se trata de localizar la cadena Guatermala dentro de cad0: %s\n", cad0);

}
