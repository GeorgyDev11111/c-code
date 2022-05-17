#include <stdio.h>
#include <conio.h>
#include "headers/myfunc.h"

int main ()
{
  int var1,
      var2,
      option,
      finaly;

  printf("Enter first var\n");
  scanf("%d",&var1);

  printf("Enter second var\n");
  scanf("%d",&var2);

  printf("1 - sum\n2 - sub\n3 - multy\n4 - divide\n");
  scanf("%d", &option);

  finaly = mySelect(var1,var2,option);
  printf("result = %d", finaly);

  getch();
  return 0;
}