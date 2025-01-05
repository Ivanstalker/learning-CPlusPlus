#include <cmath>
#include <iostream>

#define Print std::cout <<

int main() {
    system("chcp 65001");
    int a{}, b{}, c{};

    Print "введите коэфидицент квадратного уравнения (axs^2 + bx + c = 0) (a, b , c)";
    std::cin >> a >> b >> c;
    int d = b * b - 4 * a * c;
    if (d < 0) {
        Print "D = " << b * b - 4 * a * c << '\n' << " —→ нет корней" << std::endl;
    }
    if (d == 0 ) {
        Print "X = " << -b / (2 * a) << std::endl;
    }
    if (d > 0) {
        Print "X1 = " << -b - sqrt(d) / (2 * a) << ", X2 = " <<  -b + sqrt(d) / (2 * a) << std::endl;
    }
}