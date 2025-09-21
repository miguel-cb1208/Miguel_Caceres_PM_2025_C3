#include <stdio.h>
#include <stdlib.h>
 /*P1.7 Miguel Angel Caceres
   Medidas
   El programa recibe los datos longitud y peso de un objeto
   expresados en pies y libras, calcula los datos de este objeto
   pero en metros y kilogramos
   Variables de tip[o real PIE, LB, MET y KIL*/
int main(void)
{
  float PIE,LB,MET,KIL;
  printf("ingrese los datos en pies y libras:");
  scanf("%f %f",&PIE, &LB);
  MET=PIE*0.300;
  KIL=LB*0.45359;
  printf("\nDatos del objeto \nLogitud:%5.2fM \tPeso: %5.2fKG",MET, KIL);


    return 0;
}
