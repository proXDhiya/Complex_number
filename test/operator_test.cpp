#include "../Sourcs/complex.cpp"
#include <iomanip>

int main() {
    complex num1(2, 5);
    complex num2(1, 3);
    complex temp = {0};

    // operator +
    temp = num1 + num2;
    std::cout << std::setw(20) << "temp = num1 + num2 = "
    << std::setw(10) << temp << std::endl;

    // operator -
    temp = num1 - num2;
    std::cout << std::setw(20) << "temp = num1 - num2 = "
    << std::setw(10) << temp << std::endl;

    // operator *
    temp = num1 * num2;
    std::cout << std::setw(20) << "temp = num1 * num2 = " 
    << std::setw(10) << temp << std::endl;

    // operator /
    temp = num1 / num2;
    std::cout << std::setw(20) << "temp = num1 / num2 = "
    << std::setw(10) << temp << std::endl;

    // operator +=
    temp = num1;
    temp += num2;
    std::cout << std::setw(10) << "temp += num2 = "
    << std::setw(16) << temp << std::endl;

    // operator -=
    temp = num1;
    temp -= num2;
    std::cout << std::setw(10) << "temp -= num2 = "
    << std::setw(16) << temp << std::endl;

    // operator *=
    temp = num1;
    temp *= num2;
    std::cout << std::setw(10) << "temp *= num2 = "
    << std::setw(16) << temp << std::endl;

    // operator /=
    temp = num1;
    temp /= num2;
    std::cout << std::setw(10) << "temp /= num2 = "
    << std::setw(16) << temp << std::endl;
    return 0;
}