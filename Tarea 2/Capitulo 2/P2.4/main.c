#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   float PRE, NPR;
   printf("ingrese el precio del producto:");
   scanf("%f",&PRE);
   if (PRE < 1500)
    NPR = PRE *1.11;
   else
    NPR = PRE *1.08;
    printf("\n Nuevo precio del producto: %8.2f",NPR);

}
