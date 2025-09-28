#include <stdio.h>
#include <math.h>

int main(void)
{
  int NUM;
  printf("ingresa el numero para calcular la serie:");
  scanf("%d", &NUM);
  if (NUM >0)
  {
      printf("\nSerie de ULAM\n");
      scanf("%d",&NUM);
      while (NUM != 1)
      {
          if (pow(-1, NUM)>0)
            NUM = NUM / 2;
          else
            NUM = NUM * 3+1;
          printf("%d \t", NUM);
      }
  }
  else
    printf("\n NUM debe ser un entero positivo");
    return 0;
}
