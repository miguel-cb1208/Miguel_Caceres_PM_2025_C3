#include <stdio.h>
#include <stdlib.h>

void f1(int *);

void main(void)
{
int I,K=4;
for (I=1;I<=3;I++)
{
    printf("\n\n Valor de K antes de llamar a la funcion: %d", ++K);
    printf("\n Valor de K despues de llamar a la funcion: %d", f1(&K));

}
}
void f1(int *R)
{
    *R += *R;
}
