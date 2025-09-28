#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int VOT, C1 =0,C2 =0,C3 =0,C4 =0,C5 =0,NU =0,SVO;
float P01,P02,P03,P04,P05,PON;
printf("Ingrese el primer voto:");
scanf("%d",&VOT);
while(VOT)
{
    switch(VOT)
    {
    case 1: C1++; break;
    case 2: C2++; break;
    case 3: C3++; break;
    case 4: C4++; break;
    case 5: C5++; break;
    default: NU++; break;
}
printf("Ingrese el siquiente voto -0 para calcular-:");
scanf("%d",&VOT);
}
SVO = C1 + C2 + C3 + C4 + C5 + NU;
P01 = ((float)C1 / SVO)* 100;
P02 = ((float)C2 / SVO)* 100;
P03 = ((float)C3 / SVO)* 100;
P04 = ((float)C4 / SVO)* 100;
P05 = ((float)C5 / SVO)* 100;
PON = ((float)NU / SVO)* 100;
printf("\n Total de votos: %d",SVO);
printf("\n Candidato 1: %d votos --porcentaje: %5.2f",C1, P01);
printf("\n Candidato 2: %d votos --porcentaje: %5.2f",C1, P02);
printf("\n Candidato 3: %d votos --porcentaje: %5.2f",C1, P03);
printf("\n Candidato 4: %d votos --porcentaje: %5.2f",C1, P04);
printf("\n Candidato 5: %d votos --porcentaje: %5.2f",C1, P05);
printf("\n Nulos: %d votos --porcentaje: %5.2f",NU, PON);
    return 0;
}
