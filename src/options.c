#include "../headers/myfunc.h"

static int result;

int mySelect(int var1,int var2,int option)
{
  if(option == 1)
  {
    result = var1 + var2;

  }else if(option == 2)
  {    
    result = var1 - var2; 

  }else if(option == 3)
  {
    result = var1 * var2;

  }else if(option == 4)
  {
    result = var1 / var2;
  }
  return result;
}