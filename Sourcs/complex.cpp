#ifndef COMPLEX
#define COMPLEX
#include "../Headers/complex.h"


// operator -- complex with complex
complex operator +(complex COM1, complex COM2) {
    complex temp(0, 0);
    temp.real = COM1.real + COM2.real;
    temp.img = COM1.img + COM2.img;
    return temp;
}
complex operator -(complex COM1, complex COM2) {
    complex temp(0, 0);
    temp.real = COM1.real - COM2.real;
    temp.img = COM1.img - COM2.img;
    return temp;
}
complex operator *(complex COM1, complex COM2) {
    complex temp(0, 0);
    temp.real = (COM1.real * COM2.real) - (COM1.img * COM2.img);
    temp.img = (COM1.real * COM2.img) + (COM1.img * COM2.real);
    return temp;
}
complex operator /(complex COM1, complex COM2) {
    complex temp(0, 0);
    float num_temp = (COM2.real * COM2.real + COM2.img * COM2.img);
    COM2.img *= (-1);
    temp.real = (COM1.real * COM2.real - COM1.img * COM2.img) / num_temp;
    temp.img = (COM1.real * COM2.img + COM1.img * COM2.real) / num_temp;
    return temp;
}


// operator -- complex
complex operator +=(complex &COM1, complex COM2) {
    COM1.real += COM2.real;
    COM1.img += COM2.img;
    return COM1;
}
complex operator -=(complex &COM1, complex COM2) {
    COM1.real -= COM2.real;
    COM1.img -= COM2.img;
    return COM1;
}
complex operator *=(complex &COM1, complex COM2) {
    COM1.real = (COM1.real * COM2.real) - (COM1.img * COM2.img);
    COM1.img = (COM1.real * COM2.img) + (COM1.img * COM2.real);
    return COM1;
}
complex operator /=(complex &COM1, complex COM2) {
    float temp_data = (COM2.real * COM2.real) + (COM2.img * COM2.img);
    COM1.real = (COM1.real * COM2.real) + (COM1.img * COM2.img);
    COM1.img = (COM1.real * COM2.img) * (-1) * (COM1.img * COM2.real);
    COM1.real /= temp_data;
    COM1.img /= temp_data;
    return COM1;
}


// istream operator
// stdin 3 -- 3.1 -- +3.4 -- -3.8 -- i5 -- i5.1 -- +i12 -- -i5.2
// stdin 3 +i2 -- 3.5 -i6.1
std::istream &operator >>(std::istream &in, complex &COM) throw(int){
    std::string complex_string;
    getline(in, complex_string);
    int text_number = 1;
    for (int i = 0; complex_string[i] != '\0'; i++)
        if (complex_string[i] == ' ')
            text_number++;

    if (text_number == 1) {
        int signe;
        if (complex_string[0] == 'i') {
            for (size_t i = 0; complex_string[i] != '\0'; i++)
                complex_string[i] = complex_string[i + 1];
            COM.img = stof(complex_string);
        }

        else if (complex_string[0] == '+') {
            signe = 1;
            for (size_t i = 0; complex_string[i] != '\0'; i++)
                complex_string[i] = complex_string[i + 1];
            if (complex_string[0] == 'i') {
                for (size_t i = 0; complex_string[i] != '\0'; i++)
                    complex_string[i] = complex_string[i + 1];
                COM.img = stof(complex_string) * signe;
            }
            else
                COM.real = stof(complex_string);
        }
        
        else if (complex_string[0] == '-') {
            signe = -1;
            for (size_t i = 0; complex_string[i] != '\0'; i++)
                complex_string[i] = complex_string[i + 1];
            if (complex_string[0] == 'i') {
                for (size_t i = 0; complex_string[i] != '\0'; i++)
                    complex_string[i] = complex_string[i + 1];
                COM.img = stof(complex_string) * signe;
            }
            else
                COM.real = stof(complex_string);
        }
        
        else {
            COM.real = stof(complex_string);
        }
    }

    else if (text_number == 2) {
        bool swe = true;
        std::string data1;
        std::string data2;
        size_t j = 0;
        for (size_t i = 0; complex_string[i] != '\0'; i++) {
            if (swe){
                data1[j] = complex_string[i];
                j++;
                if (complex_string[i] == ' ') {
                    j = 0;
                    swe = false;
                }
            }
            else {
                data2[j] = complex_string[i];
                j++;
            }
        }
        COM.real = stof(data1);

        int signe;
        if (data2[0] == 'i') {
            for (size_t i = 0; data2[i] != '\0'; i++)
                data2[i] = data2[i + 1];
            COM.img = stof(data2);
        }

        else if (data2[0] == '+') {
            signe = 1;
            for (size_t i = 0; data2[i] != '\0'; i++)
                data2[i] = data2[i + 1];
            if (data2[0] == 'i') {
                for (size_t i = 0; data2[i] != '\0'; i++)
                    data2[i] = data2[i + 1];
                COM.img = stof(data2) * signe;
            }
            else
                throw 100;
        }
        
        else if (data2[0] == '-') {
            signe = -1;
            for (size_t i = 0; data2[i] != '\0'; i++)
                data2[i] = data2[i + 1];
            if (data2[0] == 'i') {
                for (size_t i = 0; data2[i] != '\0'; i++)
                    data2[i] = data2[i + 1];
                COM.img = stof(data2) * signe;
            }
            else
                throw 100;
        }
        
        else throw 100;
    }
    return in;
}


// overloding ostream operator <<
std::ostream &operator <<(std::ostream &out, complex &COM) {
    if (COM.real != 0)
        out << COM.real << " ";
    if (COM.img != 0)
        out << (COM.img < 0 ? '-' : '+')
        << ' ' << fabs(COM.img) << 'i';
    if (COM.real == 0 && COM.img == 0)
        out << 0;
    return out;
}
#endif //COMPLEX
