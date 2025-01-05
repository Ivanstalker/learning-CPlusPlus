//Напишите программу, которая запрашивает у пользователя два числа
//и выводит их сумму, разность, произведение и частное.

#include <iostream>

#define PRINT std::cout <<

int main() {
    system("chcp 65001");
    int x;
    int y;

    PRINT "введите два числа: ";
    std::cin >> x >> y;

    int a = x + y;
    int b = x - y;
    int c = x * y;
    int d = x / y;

    PRINT x << " + " << y << " = " << a << "\n" << x << " - " << y << " = " << b << "\n" << x << " * " << y << " = " << c << "\n" << x << " / " << y << " = " << d ;


}