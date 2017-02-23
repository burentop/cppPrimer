#include <iostream>

int main()
{
  std::cout << "Please enter two integers: ";
  int min = 0, max = 0;
  std::cin >> min >> max;
  std::cout << "Here are the numbers in that range:" << std::endl;
  while (min <= max) {
    std::cout << min << std::endl;
    ++min;
  }
  return 0;
}
