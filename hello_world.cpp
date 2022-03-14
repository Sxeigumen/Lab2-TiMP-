#include <iostream>
#include <string>
int
main()
{
  std::string name;                  //Создаём строку
  std::cout << "What is your name?"; //Выводи текст
  std::cin >> name; //Ввод строки и сохранение её в name
  std::cout << "Hello World from " << name; //Вывод тескта и строки name
  return 0;
}
