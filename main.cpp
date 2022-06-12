#include <iostream>
#include "math.h"

int main() {
    int num1 = 0;
    int num2 = 0;
    int op = 0;

    std::cout << "Введите первое число: ";
    std::cin >> num1;
    if (std::cin.fail()) {
        std::cerr << "Неправильный ввод" << "\n";;
        return 1;
    }
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    if (std::cin.fail()) {
        std::cerr << "Неправильный ввод" << "\n";;
        return 1;
    }
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> op;

    switch (op)
    {
    case 1:
        std::cout << num1 << " плюс " << num2 << " = " << summ(num1, num2) << "\n";
        break;
    case 2:
        std::cout << num1 << " минус " << num2 << " = " << diff(num1, num2) << "\n";
        break;
    case 3:
        std::cout << num1 << " умножить на " << num2 << " = " << mult(num1, num2) << "\n";
        break;
    case 4:
        std::cout << num1 << " разделить на " << num2 << " = " << divi(num1, num2) << "\n";
        break;
    case 5:
        std::cout << num1 << " в степени " << num2 << " = " << powr(num1, num2) << "\n";
        break;
    default:
        std::cerr << "Неправильный ввод" << "\n";
        return 1;
    }

    return 0;
}