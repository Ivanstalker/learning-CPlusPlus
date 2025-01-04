#include <iostream>

int main() {
    system("chcp 65001");
    // запрашивает имя
    std::cout << "введите своё имя: ";
    std::string name;
    std::cin >> name;
    // запрашивает возраст
    std::cout << "введите свой возраст: ";
    std::string years;
    std::cin >> years;
    // запрашивает город проживания
    std::cout << "введите город проживания: ";
    std::string home;
    std::cin >> home;
    // обобщение
    std::cout << "Здравствуйте, меня зовут " << name  << " мне " << years << " лет "<< std::endl;
    std::cout << "Я живу в городе " << home << std::endl;


    return 0;
}