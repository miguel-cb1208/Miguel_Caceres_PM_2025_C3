#include <stdio.h>
#include <stdlib.h>
int F1(int, int *);

int A = 3;
int B = 7;
int C = 4;
int D = 2;
void main(void)
{
    A = F1 (C, &D);
    printf("\n%d %d %d %d", A,B,C,D);
    C = 3;
    C = F1 (A, &C);
    printf("\n %d %d %d %d",A,B,C,D);
}
int F1(int x, int *y)
{
    int A;
    A = x * *y;
    C++;
    B += *y;
    printf("%d %d %d %d",A,B,C,D);
    *y--;
    return (C);
}
