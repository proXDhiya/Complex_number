#include "../Sourcs/complex.cpp"
#include <iomanip>

int main() {
    complex num1(2, 5);
    complex num2(1, 3);
    complex temp = {0};

    std::cout << BOLD_YELLOW << "------------- "
    << BOLD_BLEU << "operator + - * /"
    << BOLD_YELLOW << " -------------" << std::endl;

    
    // operator +
    temp = num1 + num2;
    std::cout << "|    " << WHITE
    << std::setw(21) << "temp = num1 + num2 = "
    << std::setw(12) << temp
    << std::setw(13) << BOLD_YELLOW << "|" << std::endl;


    // operator -
    temp = num1 - num2;
    std::cout << "|    " << WHITE
    << std::setw(21) << "temp = num1 - num2 = "
    << std::setw(12) << temp
    << std::setw(13) << BOLD_YELLOW << "|" << std::endl;


    // operator *
    temp = num1 * num2;
    std::cout << "|    " << WHITE
    << std::setw(21) << "temp = num1 * num2 = " 
    << std::setw(10) << temp
    << std::setw(12) << BOLD_YELLOW << "|" << std::endl;


    // operator /
    temp = num1 / num2;
    std::cout << "|    " << WHITE
    << std::setw(21) << "temp = num1 / num2 = "
    << std::setw(10) << temp
    << std::setw(11) << BOLD_YELLOW << "|" << std::endl
    << "--------------------------------------------" << std::endl << std::endl;


    std::cout << BOLD_YELLOW << "----------- "
    << BOLD_BLEU << "operator += -= *= /="
    << BOLD_YELLOW << " -----------" << std::endl;


    // operator +=
    temp = num1;
    temp += num2;
    std::cout << "|    " << WHITE
    << std::setw(11) << "temp += num2 = "
    << std::setw(18) << temp
    << std::setw(13) << BOLD_YELLOW << "|" << std::endl;


    // operator -=
    temp = num1;
    temp -= num2;
    std::cout << "|    " << WHITE
    << std::setw(11) << "temp -= num2 = "
    << std::setw(18) << temp
    << std::setw(13) << BOLD_YELLOW << "|" << std::endl;


    // operator *=
    temp = num1;
    temp *= num2;
    std::cout << "|    " << WHITE
    << std::setw(11) << "temp *= num2 = "
    << std::setw(16) << temp
    << std::setw(12) << BOLD_YELLOW << "|" << std::endl;


    // operator /=
    temp = num1;
    temp /= num2;
    std::cout << "|    " << WHITE
    << std::setw(11) << "temp /= num2 = "
    << std::setw(16) << temp
    << std::setw(11) << BOLD_YELLOW << "|" << std::endl
    << "--------------------------------------------" << std::endl << std::endl;


    std::cout << BOLD_YELLOW << "-------------- "
    << BOLD_BLEU << "operator ++ --"
    << BOLD_YELLOW << " --------------" << std::endl;


    // operator ++
    temp = {2, 2};
    ++temp;
    std::cout << "|    " << WHITE
    << std::setw(9) << "++temp = "
    << std::setw(24) << temp
    << std::setw(13) << BOLD_YELLOW << "|" << std::endl;


    // operator --
    --temp;
    std::cout << "|    " << WHITE
    << std::setw(9) << "--temp = "
    << std::setw(24) << temp
    << std::setw(13) << BOLD_YELLOW << "|" << std::endl
    << "--------------------------------------------" << std::endl << std::endl;
    return 0;
}