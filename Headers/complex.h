#ifndef COMPLEX
#define COMPLEX

class complex{
    private:
        float real;
        float img;

    protected:

    public:
        // constructors and destructors
        complex(float real = 0, float img = 0);
        complex(complex &COMP);
        ~complex() {;}

        // get and set method
        void img_set(float img) {this->img = img; }
        void real_set(float real) {this->real = real; }
        float img_get() {return this->img; }
        float real_get() {return this->real; }
        
};

#endif //COMPLEX
