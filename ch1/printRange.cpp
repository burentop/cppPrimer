#include <iostream>

int main()
{
  std::cout << "Please enter two integers: ";
  int num1 = 0, num2 = 0;
  std::cin >> num1 >> num2;
  std::cout << "Here are the numbers in that range:" << std::endl;
  if (num1 >= num2) {
    while (num2 <= num1) {
      std::cout << num2 << std::endl;
      ++num2;
    }
  } else {
    while (num1 < num2) {
      std::cout << num1 << std::endl;
      ++num1;
    }
  }
  return 0;
}
