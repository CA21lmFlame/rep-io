#include <iostream>

int main()
{
  int a = 0;

  while (!(std::cin >> a).good())
  {
    std::cin.clear();
    std::cin.ignore();
    std::cout << "It's not ok!\n";
  }
  std::cout << "It's ok!\n";
  std::cout << a << "\n";
}
