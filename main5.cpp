// Разработайте программу, которая рассчитывает стоимость товара со скидкой.
// Пользователь вводит стоимость товара и процент скидки.
// Программа должна вывести итоговую стоимость с учетом скидки.
#include <process.h>
#include <iostream>

#define PRINT std::cout <<

int main() {
    int cost;
    int skidka;

    system("chcp 65001");
    PRINT "введите стоимость товара: ";
    std::cin >> cost;
    PRINT "введите процент скидки: ";
    std::cin >> skidka;

    // цена со скидкой
    int cost_2 = cost - (cost * skidka / 100);

    PRINT cost_2;

}
