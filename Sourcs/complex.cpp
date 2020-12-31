#include "../Headers/complex.h"
#include <limits>


// constructor for complex object
// throw Error num 100 for MAX size of @real or @img
complex::complex(float real, float img) throw(int){
    if ((img || real) == std::numeric_limits<float>::max())
        throw 100;

    this->real = real;
    this->img = img;
}


// copy constructor for the complex object
// throw the same Error num 100 if the first object
// throw an Error!
complex::complex(complex &COMP) throw(int){
    void **ptr;
    try{
        ptr = (void **) new complex(COMP.real, COMP.img);
        free_up(ptr);
    }catch(...){
        throw 100;
        free_up(ptr);
    }

    this->real = COMP.real;
    this->img = COMP.img;
}


// img_set -- set the img data of a complex object
// Error throw integer whene img = MAX FLOUT DATA
// throw number 101 while Error existe
void complex::img_set(float img) throw(int){
    if (img == std::numeric_limits<float>::max())
        throw 101;

    this->img = img;
}


// real_set -- set the real data of a compelx object
// Error throw integer whene real = MAX FLOUT DATA
// throw number 101 while Error existe
void complex::real_set(float real) throw(int){
    if (real == std::numeric_limits<float>::max())
        throw 101;

    this->real = real;
}


// img_get -- get the img data of a complex object
float complex::img_get() {return this->img; }


// real_get -- get the real data of a complex object
float complex::real_get() {return this->real; }
