#include <string>
#include <iostream>
#include <cmath>
#include "color.h"

class complex{
    private:
        float real;
        float img;


    public:
        // constructors and destructors
        inline complex(float real = 0, float img = 0) :real(real), img(img) {;}
        inline complex(complex &COM) :real(COM.real), img(COM.img) {;}
        inline complex(const complex &COM) {operator= (COM);}
        inline ~complex() {;}


        // get and set method
        void img_set(float img) {this->img = img; }
        void real_set(float real) {this->real = real; }
        float img_get() const {return this->img; }
        float real_get() const {return this->real; }

        
        // operator -- complex with complex
        inline friend complex operator+(complex, complex);
        inline friend complex operator-(complex, complex);
        inline friend complex operator*(complex, complex);
        inline friend complex operator/(complex, complex);

        // operator -- complex
        inline friend complex operator+=(complex &, complex);
        inline friend complex operator-=(complex &, complex);
        inline friend complex operator*=(complex &, complex);
        inline friend complex operator/=(complex &, complex);

        // operator -- complex '++' '--'
        inline friend complex operator++(complex &);
        inline friend complex operator--(complex &);
        // NULL OPERATOR

        // operator -- complex with complex conditons
        inline friend bool operator==(const complex&, const complex&);
        inline friend bool operator!=(const complex&, const complex&);
        inline friend bool operator>(const complex&, const complex&);
        inline friend bool operator>=(const complex&, const complex&);
        inline friend bool operator<(const complex&, const complex&);
        inline friend bool operator<=(const complex&, const complex&);

        // operator -- complex with float
        inline friend complex operator+(complex, float);
        inline friend complex operator-(complex, float);
        inline friend complex operator*(complex, float);
        inline friend complex operator/(complex, float);
        inline friend complex operator+=(complex&, float);
        inline friend complex operator-=(complex&, float);
        inline friend complex operator*=(complex&, float);
        inline friend complex operator/=(complex&, float);

        // operator -- float with complex ! return COMPLEX
        inline friend complex operator+(float, complex);
        inline friend complex operator-(float, complex);
        inline friend complex operator*(float, complex);
        inline friend complex operator/(float, complex);

        // operator -- complex with string
        inline friend complex operator+(complex, std::string);
        inline friend complex operator-(complex, std::string);
        inline friend complex operator*(complex, std::string);
        inline friend complex operator/(complex, std::string);
        inline friend complex operator+=(complex&, std::string);
        inline friend complex operator-=(complex&, std::string);
        inline friend complex operator*=(complex&, std::string);
        inline friend complex operator/=(complex&, std::string);

        // operator -- string with complex 
        inline friend complex operator+(std::string, complex);
        inline friend complex operator-(std::string, complex);
        inline friend complex operator*(std::string, complex);
        inline friend complex operator/(std::string, complex);

        // istream & ostream operator
        inline friend std::istream &operator>>(std::istream &, complex &);
        inline friend std::ostream &operator<<(std::ostream &, complex &);
};
