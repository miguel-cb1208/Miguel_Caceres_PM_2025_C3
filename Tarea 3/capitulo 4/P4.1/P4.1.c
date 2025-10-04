#include <stdio.h>
#include <stdlib.h>
int cubo (void);
int I;
int main(void)
{
    int cub;
    for(I =1; I<=10;I++)
    {
        cub= cubo();
        printf("\n El cubo de %d es %d",I, cub);

    }
}
int cubo(void)
{
    return (I*I*I);
}
