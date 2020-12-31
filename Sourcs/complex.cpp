#include "../Headers/complex.h"

// constructor for complex object
complex::complex(float real, float img){
    this->real = real;
    this->img = img;
}


// copy constructor for the complex object
complex::complex(complex &COMP){
    this->real = COMP.real;
    this->img = COMP.img;
}
