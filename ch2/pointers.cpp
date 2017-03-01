#include <iostream>

int main()
{
  double ivar = 2.56, *pvar = &ivar;
  std::cout << "Variable ivar: " << ivar << ", pointer pvar: " << *pvar << std::endl;
  double pi = 3.14;
  pvar = &pi;
  std::cout << "I changed the value of the pointer pvar." << std::endl;
  std::cout << "Variable pi: " << pi << std::endl;
  std::cout << "Pointer pvar: " << *pvar << std::endl;
  *pvar = 3.15;
  std::cout << "Using pointer pvar, I changed the value of variable pi." << std::endl;
  std::cout << "Variable pi: " << pi << std::endl;
  return 0;
}
