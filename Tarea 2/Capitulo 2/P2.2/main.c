#include <stdio.h>
#include <stdlib.h>

int main(void)
{
 float PRE, NPR;
 printf("ingrese el presio del producto:");
 scanf("%f", &PRE);
 if (PRE<1500)
 {
     NPR = PRE * 1.11;
     printf("\n nuevo presio: %7.2f",NPR);
 }
    return 0;
}
