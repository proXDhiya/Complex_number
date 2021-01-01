#include "../Sourcs/complex.cpp"

int main() {
    complex test1;
    complex test2(1);
    complex test3(2.3f, 5.6f);
    complex test4(test2);
    complex *test5 = new complex();
    complex *test6 = new complex(test4);


    delete test5;
    delete test6;
    return 0;
}
