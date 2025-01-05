#include <iostream>

#define Print std::cout <<


int main() {
  std::string name{}, surname{};

  system("chcp 65001");
  Print "введите своё имя: ";
  std::cin >> name;
  Print "введите совю фамилию: ";
  std::cin >> surname;

  Print surname << ", " << name;

}