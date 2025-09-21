#include <stdio.h>
#include <stdlib.h>
//P1.3 Miguel Angel Caceres
int main(void)
{
    int cla;
    float SU1,SU2,SU3,SU4,SU5,SU6, ING, PRO;
    printf("ingrese la clave del empleado y los 6 sueldos:");
    scanf("%d %f %f %f %f %f %f",&cla,&SU1,&SU2,&SU3,&SU4,&SU5,&SU6);
    ING = (SU1+SU2+SU3+SU4+SU5+SU6);
    PRO = (ING/6);
    printf("%d %5.2f %5.2f",cla,ING,PRO);

    return 0;
}
