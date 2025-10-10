#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int MAX=100;
    void Lectura(int, int);
    int binaria(int *, int, int);
    void main(void)
    {
        int RES, ELE, TAM, VEC[MAX];
        do
        {
        printf("Ingrese el zize del arreglo: ");
        scanf("%d", &TAM);

    }
    while (TAM>MAX || TAM<1);
    Lectura(VEC, TAM);
    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);
    RES = binaria(VEC, TAM, ELE);

    if (RES)
        printf("\n El elemento se encuentra en la posicion: %d", RES);
    else
        printf("\n El elemento se encuentra en el arreglo");
}
void Lectura(int A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%d", &A[I]);
    }
}
int binaria(int A[],int T, int E)
{
    int ELE, IZQ = 0, CEN, DER = T-1, BAN = 0;
    while ((IZQ <= DER) && (!BAN))
    {
        CEN = (IZQ + DER) / 2;
        if (E == A[CEN])
            BAN = CEN;
        else
            if (E > A[CEN])
            IZQ = CEN + 1;
        else DER = CEM - 1;
    }
    return (BAN);
}
