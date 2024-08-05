#include <iostream>

//i: 10 11
//o: 10 11

//i: 10.11
//o: 10 0
//std::cin failed

//i: 13 14.1
//o: 13 14

//i: 25t26
//o: 25 0
//std::cin failed
int main()
{
  int a = 0, b = 0;
  std::cin >> a;
  std::cin >> b;

  std::cout << a << " " << b << "\n";
}
