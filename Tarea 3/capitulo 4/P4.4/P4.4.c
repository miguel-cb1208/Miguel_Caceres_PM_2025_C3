#include <stdio.h>
#include <stdlib.h>
int f1(void);
int f2(void);
int f3(void);
int f4(void);

int K = 3;

void main(void)
{
int I;
for(I=1;I<=3; I++)
{
    printf("\nEl resultado de la funcion f1 es; %d",f1());
    printf("\nEl resultado de la funcion f2 es; %d",f2());
    printf("\nEl resultado de la funcion f3 es; %d",f3());
    printf("\nEl resultado de la funcion f4 es; %d",f4());
}
}
int F1(void)
{
    K+=K;
    return (K);
}
int f2(void)
{
    int K=1;
    K++;
    return(K);
}
int f3(void)
{
    static int K = 8;
    K+=2;
    return(K);
}
int f4 (void)
{
    int K=5;
    K=K+ ::K;
    return(K);
}
