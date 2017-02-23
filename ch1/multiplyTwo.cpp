#include<iostream>

int main()
{
  std::cout << "Please enter two integers: " << std::endl;
  int n1 = 0, n2 = 0;
  std::cin >> n1 >> n2;
  std::cout << n1 << " times " << n2 << " is " << n1 * n2 << std::endl;
  return 0;
}
