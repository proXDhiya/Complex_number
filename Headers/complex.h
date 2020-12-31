#ifndef COMPLEX
#define COMPLEX

class complex{
    private:
        float real;
        float img;

    protected:
        void free_up(void **ptr) {delete ptr; *ptr = nullptr; };

    public:
        // constructors and destructors
        complex(float real = 0, float img = 0) throw(int);
        complex(complex &COMP) throw(int);
        ~complex() {delete this; };

        // get and set method
        void img_set(float) throw(int);
        void real_set(float) throw(int);
        float img_get();
        float real_get();

        
};

#endif //COMPLEX
