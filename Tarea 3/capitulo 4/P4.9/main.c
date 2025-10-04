#include <stdio.h>
#include <stdlib.h>

int suma(int x,int y)
{
    return(x+y);
}
int resta(int x, int y)
{
    return (x+y);
}
int Control(int(*apf) (int, int), int x, int y)
{
    int res;
    res = (*apf) (x,y);
    return (res);
}
void main (void)
{
int R1, R2;
R1 = Control(suma, 15, 5);
R2 = Control(resta, 10,4);
printf("\nResultado 1: %d", R1);
printf("\n Resultado 2: %d",R2);
}
