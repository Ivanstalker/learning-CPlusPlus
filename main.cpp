#include <iostream>

int main() {
    system("chcp 65001");
    // запрашивает имя для программы
    std::cout << "придумай мне имя: " << std::endl;
    std::string  name;
    std::cin >> name;
    // напиши сколько мне лет
    std::cout << "напиши сколько мне лет: " << std::endl;
    std::string years;
    std::cin >> years;
    // где программа живет
    std::cout << "напиши где я живу: " << std::endl;
    std::string home;
    std ::cin >> home;
    // напиши чем я увлекаюсь
    std::cout << "напиши чем я увлекаюсь: " << std::endl;
    std::string hobby;
    std ::cin >> hobby;
    // обобщение
    std::cout << "здравствуйте, меня зовут " << name << ", мне " << years << " лет\n Я живу в " << home << ", я увлекаюсь " << hobby << std::endl;
    return 0;
}