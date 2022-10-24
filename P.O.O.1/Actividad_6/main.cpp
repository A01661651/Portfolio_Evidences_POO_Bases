#include <iostream>
#include "triangle.h"
using namespace std;

int main(){
    Triangle triangulo1;
    Triangle triangulo2(Point(10,3), Point(6,8), Point(11,2));
    Triangle triangulo3(Point(1000,1050), Point(1640,1200), Point(1300,1300));
    Triangle triangulo4(Point(50,45), Point(60,71), Point(65,70));
    cout<<"El perimetro del 1º triángulo es: "<<triangulo1.calculatePerimeter()<<endl;
    cout<<"El área del 1º triángulo es: "<<triangulo1.calculateArea()<<endl;
    cout<<"El perimetro del 2º triángulo es: "<<triangulo2.calculatePerimeter()<<endl;
    cout<<"El área del 2º triángulo es: "<<triangulo2.calculateArea()<<endl;
    cout<<"El perimetro del 3º triángulo es: "<<triangulo3.calculatePerimeter()<<endl;
    cout<<"El área del 3º triángulo es: "<<triangulo3.calculateArea()<<endl;
    cout<<"El perimetro del 4º triángulo es: "<<triangulo4.calculatePerimeter()<<endl;
    cout<<"El área del 4º triángulo es: "<<triangulo4.calculateArea()<<endl;
    return 0;    
}