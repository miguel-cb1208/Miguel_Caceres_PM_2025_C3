#include <stdio.h>
#include <stdlib.h>
void main(void)
{
    int I, NUM, CUE = 0;
    int ARRE[100];
    for (I=0; I<100;I++)
    {
        printf("Ingrese el numero que se va a buscar en el arreglo: ");
        scanf("%d", &ARRE[I++]);
    }
    printf("\nIngrese el numero que se va a buscar en el areglo: ");
scanf("%d",&NUM);
for (I=0; I<100; I++)
if(ARRE[I] == NUM)
    CUE++;
printf("\n\nEl %d se encuentra %d veses en el arreglo", NUM, CUE);


}
