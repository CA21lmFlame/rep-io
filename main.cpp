#include <iostream>
//Переменные

//std::cin - переменная типа std::istream
// поток ввода

//std::cout - переменная типа std::ostream
// поток вывода

//std::cerr - переменная типа std::ostream
// поток вывода ошибок

//std::clog - переменная типа std::ostream
// поток вывода логов

int main()
{
 //Базовые типы:
 // вещественные (double, float, long double)
 // целочисленные (char, int, unsigned long long...)
 // логическое (bool)
 // ^^^
 // тип void
 // любые указатели
 // ссылки
 // ...

 int a = 0;
 std::cin >> a;
 if (std::cin.good())
 {
   std::cout << "Number is good!\n";
   std::cout << a << "\n";
 }
 else if (std::cin.eof())
 {
   std::cout << "Stream has EOF\n";
 }
 else if (std::cin.fail())
 {
   std::cout << "Number is not good!\n";
   std::cout << "a is stands for " << a << "\n";
 }
 else if (std::cin.bad())
 {
   std::cout << "Stream in crushed!\n";
 }

 //if (!std::cin)
 //if (std::cin.fail() || std::cin.bad())


 //if (std::cin)
 //if (!std::cin.fail() && !std::cin.bad())
}
