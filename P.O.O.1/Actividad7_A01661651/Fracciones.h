#ifndef FRACCION_DEFINED
#define FRACCION_DEFINED
#include <string>
using namespace std;

class Fraccion{
    private:
        int num, den;
    public: 
        Fraccion();
        Fraccion(int num, int den);
        ~Fraccion();
        int getNum();
        int getDen();
        void setNum(int num);
        void setDen(int den);
        double calcValorReal();
        Fraccion sumaFracciones(Fraccion f2);
        void imprimeFraccion();
};
#endif