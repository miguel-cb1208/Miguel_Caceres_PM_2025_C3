#include <stdio.h>
#include <stdlib.h>

int main(void)
{
 char *cad0;
 cad0 = "Argentina";
 puts(cad0);

 cad0 = "Brasil";
 puts(cad0);

 char *cad1;
 gets(*cad1);  gets(cad1);

 char *cad1 = "en el libro esta vacio";
 gets(cad1);

 char cad1[];

 char cad2[20] = "Mexico";
 puts(cad2);
 gets(cad2);
 puts(cad2);
 cad2[10] = "Guatemala";

}
