#include <iostream>




// 2.	Попробуй объявить константы с помощью #define (но помни, что это не рекомендуется).
#define PI_2 3.14159265
#define NUM_2 4
#define AlPHA_2 "A"
#define MESSAGE_2 "Hello my friend!"
#define PRINT std::cout <<


int main () {
    // 1.	Объяви несколько констант разных типов (int, float, char, string, bool), используя const.
    const int NUM = 4;
    const float PI = 3.14159;
    const char ALPHA = 'A';
    const std::string MESSAGE = "Hello World!";
    const bool  IS_DEBUG = false;

    // 2.	Попробуй объявить константы с помощью #define (но помни, что это не рекомендуется).
    PRINT MESSAGE_2;

    // 3.	Попытайся изменить значение константы и посмотри, как отреагирует компилятор.
    // NUM = 10     - ошибка

    // 4.	Попробуй использовать constexpr для константы и для функции.
    constexpr size_t MAX = 10;
    int list_input[MAX];

    return 0;
}