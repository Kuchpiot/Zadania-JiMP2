#include "Creator.h"

#include <iostream>

int main()
{
  Product<test> var;

  std::cout << var.create()->getA() << std::endl;

  return 0;
  
}
