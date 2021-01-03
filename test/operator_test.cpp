#include "../Sourcs/complex.cpp"

int main() {
    // alocate in heap memory and print the output
    // using ostream operator <<
    void *ptr = (void *)new complex(1, 2);
    std::cout << "Print the OUTPUT using Ostream Operator! ~~> "
    << *(complex *)ptr << std::endl;
    delete (complex *)ptr;
    ptr = nullptr;


    // operator +
    complex test1(1, 2);
    complex test2(2, 6);
    complex sum = test1 + test2;
    std::cout << "print the SUM of two complex object! ~~> "
    << sum << std::endl;


    // operator -
    sum = test2 - test1;
    std::cout << "print the SUBSTRACT of two complex object! ~~> "
    << sum << std::endl;


    // operator *
    sum = test1 * test2;
    std::cout << "print the MULTIPLICATION of two complex object! ~~> "
    << sum << std::endl;


    // operator / MATH ERROR HERE!
    sum = test2 / test1;
    std::cout << "print the DIVISION of two complex object! ~~>" << std::endl;

    // operator +=
    sum = test1;
    sum += test1;
    std::cout << "sum = " << sum << std::endl;


    //operator -=
    sum = test2;
    sum -= test1;
    std::cout << "sum = " << sum << std::endl;


    // operator *= MATH ERROR
    sum = test1;
    sum *= test1;
    std::cout << "sum = " << sum << std::endl;


    std::cin >> sum;
    std::cout << sum << std::endl;
    return 0;
}