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
    temp = num1 + num2; //temp = (2 + 5i) + (1 + 3i)
    std::cout << "|    " << WHITE
    << std::setw(21) << "temp = num1 + num2 = "
    << std::setw(12) << temp
    << std::setw(13) << BOLD_YELLOW << "|" << std::endl;


    // operator -
    temp = num1 - num2; //temp = (2 + 5i) - (1 + 3i)
    std::cout << "|    " << WHITE
    << std::setw(21) << "temp = num1 - num2 = "
    << std::setw(12) << temp
    << std::setw(13) << BOLD_YELLOW << "|" << std::endl;


    // operator *
    temp = num1 * num2; //temp = (2 + 5i) * (1 + 3i)
    std::cout << "|    " << WHITE
    << std::setw(21) << "temp = num1 * num2 = " 
    << std::setw(10) << temp
    << std::setw(12) << BOLD_YELLOW << "|" << std::endl;


    // operator /
    temp = num1 / num2; //temp = (2 + 5i) / (1 + 3i)
    std::cout << "|    " << WHITE
    << std::setw(21) << "temp = num1 / num2 = "
    << std::setw(10) << temp
    << std::setw(11) << BOLD_YELLOW << "|" << std::endl
    << "--------------------------------------------" << std::endl << std::endl;


    std::cout << BOLD_YELLOW << "----------- "
    << BOLD_BLEU << "operator += -= *= /="
    << BOLD_YELLOW << " -----------" << std::endl;

    
    // operator +=
    temp = num1;    //temp = (2 + 5i)
    temp += num2;   //temp + (1 + 3i)
    std::cout << "|    " << WHITE
    << std::setw(11) << "temp += num2 = "
    << std::setw(18) << temp
    << std::setw(13) << BOLD_YELLOW << "|" << std::endl;


    // operator -=
    temp = num1;    //temp = (2 + 5i)
    temp -= num2;   //temp - (1 + 3i)
    std::cout << "|    " << WHITE
    << std::setw(11) << "temp -= num2 = "
    << std::setw(18) << temp
    << std::setw(13) << BOLD_YELLOW << "|" << std::endl;


    // operator *=
    temp = num1;    //temp = (2 + 5i)
    temp *= num2;   //temp * (1 + 3i)
    std::cout << "|    " << WHITE
    << std::setw(11) << "temp *= num2 = "
    << std::setw(16) << temp
    << std::setw(12) << BOLD_YELLOW << "|" << std::endl;


    // operator /=
    temp = num1;    //temp = (2 + 5i)
    temp /= num2;   //temp / (1 + 3i)
    std::cout << "|    " << WHITE
    << std::setw(11) << "temp /= num2 = "
    << std::setw(16) << temp
    << std::setw(11) << BOLD_YELLOW << "|" << std::endl
    << "--------------------------------------------" << std::endl << std::endl;


    std::cout << BOLD_YELLOW << "-------------- "
    << BOLD_BLEU << "operator ++ --"
    << BOLD_YELLOW << " --------------" << std::endl;


    // operator ++
    temp = {2, 2};      //temp = (2 + 2i)
    ++temp;             //temp + (1 + i)
    std::cout << "|    " << WHITE
    << std::setw(9) << "++temp = "
    << std::setw(24) << temp
    << std::setw(13) << BOLD_YELLOW << "|" << std::endl;


    // operator --
    --temp;             //temp - (1 + i)
    std::cout << "|    " << WHITE
    << std::setw(9) << "--temp = "
    << std::setw(24) << temp
    << std::setw(13) << BOLD_YELLOW << "|" << std::endl
    << "--------------------------------------------" << std::endl << std::endl;


    std::cout << BOLD_YELLOW << "--------- "
    << BOLD_BLEU << "operator == != < <= > >="
    << BOLD_YELLOW << " ---------" << std::endl;


    // operator ==
    std::cout << "|    " << WHITE
    << std::setw(9) << "num1 == num2 " << (num1 == num2 ? BOLD_GREEN : BOLD_RED)
    << std::setw(18) << (num1 == num2 ? "True" : "False")
    << std::setw(14) << BOLD_YELLOW << "|" << std::endl;


    // operator !=
    std::cout << "|    " << WHITE
    << std::setw(9) << "num1 != num2 " << (num1 != num2 ? BOLD_GREEN : BOLD_RED)
    << std::setw(17) << (num1 != num2 ? "True" : "False")
    << std::setw(15) << BOLD_YELLOW << "|" << std::endl; 


    // operator >
    std::cout << "|    " << WHITE
    << std::setw(9) << "num1 >  num2 " << (num1 > num2 ? BOLD_GREEN : BOLD_RED)
    << std::setw(17) << (num1 > num2 ? "True" : "False")
    << std::setw(15) << BOLD_YELLOW << "|" << std::endl;


    // operator >=
    std::cout << "|    " << WHITE
    << std::setw(9) << "num1 >= num2 " << (num1 >= num2 ? BOLD_GREEN : BOLD_RED)
    << std::setw(17) << (num1 >= num2 ? "True" : "False")
    << std::setw(15) << BOLD_YELLOW << "|" << std::endl;


    // operator <
    std::cout << "|    " << WHITE
    << std::setw(9) << "num1 <  num2 " << (num1 < num2 ? BOLD_GREEN : BOLD_RED)
    << std::setw(18) << (num1 < num2 ? "True" : "False")
    << std::setw(14) << BOLD_YELLOW << "|" << std::endl;


    // operator <=
    std::cout << "|    " << WHITE
    << std::setw(9) << "num1 <= num2 " << (num1 <= num2 ? BOLD_GREEN : BOLD_RED)
    << std::setw(18) << (num1 <= num2 ? "True" : "False")
    << std::setw(14) << BOLD_YELLOW << "|" << std::endl
    << "--------------------------------------------" << std::endl << std::endl;

    
    std::cout << BOLD_YELLOW << "-------- "
    << BOLD_BLEU << "operator complex with float"
    << BOLD_YELLOW << " -------" << std::endl;


    // complex + float
    float var = 5;
    temp = num1 + var;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp = num1 + var "
    << std::setw(15) << temp
    << std::setw(13) << BOLD_YELLOW << "|" << std::endl;


    // complex - float
    temp = num1 - var;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp = num1 - var "
    << std::setw(14) << temp
    << std::setw(13) << BOLD_YELLOW << "|" << std::endl;


    // complex * float
    temp = num1 * var;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp = num1 * var "
    << std::setw(14) << temp
    << std::setw(12) << BOLD_YELLOW << "|" << std::endl;


    // complex / float
    temp = num1 / var;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp = num1 / var "
    << std::setw(13) << temp
    << std::setw(13) << BOLD_YELLOW << "|" << std::endl;


    // complex += float
    temp = num1;
    temp += var;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp += var "
    << std::setw(21) << temp
    << std::setw(13) << BOLD_YELLOW << "|" << std::endl;


    // complex -= float
    temp = num1;
    temp -= var;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp -= var "
    << std::setw(20) << temp
    << std::setw(13) << BOLD_YELLOW << "|" << std::endl;


    // complex *= float
    temp = num1;
    temp *= var;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp *= var "
    << std::setw(20) << temp
    << std::setw(12) << BOLD_YELLOW << "|" << std::endl;


    // complex /= float
    temp = num1;
    temp /= var;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp /= var "
    << std::setw(19) << temp
    << std::setw(13) << BOLD_YELLOW << "|" << std::endl
    << "--------------------------------------------" << std::endl << std::endl;


    std::cout << BOLD_YELLOW << "-------- "
    << BOLD_BLEU << "operator float with complex"
    << BOLD_YELLOW << " -------" << std::endl;


    // float + complex
    temp = var + num1;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp = var + num1 "
    << std::setw(14) << temp
    << std::setw(14) << BOLD_YELLOW << "|" << std::endl;


    // float - complex
    temp = var - num1;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp = var - num1 "
    << std::setw(13) << temp
    << std::setw(14) << BOLD_YELLOW << "|" << std::endl;


    // float * complex
    temp = var * num1;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp = var * num1 "
    << std::setw(13) << temp
    << std::setw(13) << BOLD_YELLOW << "|" << std::endl;


    // float / complex
    temp = var / num1;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp = var / num1 "
    << std::setw(12) << temp
    << std::setw(14) << BOLD_YELLOW << "|" << std::endl
    << "--------------------------------------------" << std::endl << std::endl;


    std::cout << BOLD_YELLOW << "------- "
    << BOLD_BLEU << "operator complex with string"
    << BOLD_YELLOW << " -------" << std::endl;


    // complex + string
    std::string str = "1i";
    temp = num1 + str;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp = num1 + str "
    << std::setw(14) << temp
    << std::setw(14) << BOLD_YELLOW << "|" << std::endl;


    // complex - string
    temp = num1 - str;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp = num1 - str "
    << std::setw(14) << temp
    << std::setw(14) << BOLD_YELLOW << "|" << std::endl;


    // complex * string
    temp = num1 * str;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp = num1 * str "
    << std::setw(13) << temp
    << std::setw(14) << BOLD_YELLOW << "|" << std::endl;


    // complex / string
    temp = num1 / str;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp = num1 / str "
    << std::setw(14) << temp
    << std::setw(14) << BOLD_YELLOW << "|" << std::endl;


    // complex += string
    temp = num1;
    temp += str;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp += str "
    << std::setw(20) << temp
    << std::setw(14) << BOLD_YELLOW << "|" << std::endl;


    // complex -= string
    temp = num1;
    temp -= str;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp -= str "
    << std::setw(20) << temp
    << std::setw(14) << BOLD_YELLOW << "|" << std::endl;


    // complex *= float
    temp = num1;
    temp *= str;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp *= str "
    << std::setw(19) << temp
    << std::setw(14) << BOLD_YELLOW << "|" << std::endl;


    // complex /= float
    temp = num1;
    temp /= str;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp /= str "
    << std::setw(20) << temp
    << std::setw(14) << BOLD_YELLOW << "|" << std::endl
    << "--------------------------------------------" << std::endl << std::endl;


    std::cout << BOLD_YELLOW << "------- "
    << BOLD_BLEU << "operator string with complex"
    << BOLD_YELLOW << " -------" << std::endl;


    // string + complex
    temp = str + num1;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp = str + num1 "
    << std::setw(14) << temp
    << std::setw(14) << BOLD_YELLOW << "|" << std::endl;


    // string - complex
    temp = str - num1;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp = str - num1 "
    << std::setw(14) << temp
    << std::setw(14) << BOLD_YELLOW << "|" << std::endl;


    // string * complex
    temp = str * num1;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp = str * num1 "
    << std::setw(13) << temp
    << std::setw(14) << BOLD_YELLOW << "|" << std::endl;


    // string / complex
    temp = str / num1;
    std::cout << "|    " << WHITE
    << std::setw(9) << "temp = str / num1 "
    << std::setw(14) << temp
    << std::setw(14) << BOLD_YELLOW << "|" << std::endl
    << "--------------------------------------------" << std::endl << std::endl;
    return 0;
}