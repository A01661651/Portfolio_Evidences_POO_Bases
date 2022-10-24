#include <iostream>
#include "Fracciones.h"

Fraccion::Fraccion(){
    num = 1;
    den = 2;
}
Fraccion::Fraccion(int num, int den){
    this->num = num;
    this->den = den;
}
Fraccion::~Fraccion(){
}
int Fraccion::getNum(){
    return num;
}
int Fraccion::getDen(){
    return den;
}
void Fraccion::setNum(int num){
    this->num = num;
}
void Fraccion::setDen(int den){
    this->den = den;
}
double Fraccion::calcValorReal(){
    return double(getNum())/getDen();
}
Fraccion Fraccion::sumaFracciones(Fraccion f2){
    int numfi; 
    int denfi;
    numfi = (this->num)*f2.getDen() + f2.getNum()*(this->den); 
    denfi = (this->den)*f2.getDen();
    return Fraccion(numfi, denfi);
}
void Fraccion::imprimeFraccion(){
    cout<<"La Fraccion es : "<<num<<"/"<<den<<endl;
    cout<<"La Fraccion en decimal es : "<<calcValorReal()<<endl;
} 