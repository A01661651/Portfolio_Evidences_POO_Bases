#include <iostream>
#include "Fracciones.h"
#include "Fracciones.cpp"
using namespace std;

int main(){
    Fraccion fracciones[5];
    int numerador = 1, denominador = 2;
    for (int i=0; i<5; i++){
        cout<<"Ingrese el numerador de la fraccion "<<i+1<<": "<<endl;
        cin>>numerador;
        fracciones[i].setNum(numerador);
        do{
            cout<<"Introduce el denominador de la fraccion "<<i+1<<" (no puede ser cero): "<<endl;
            cin>>denominador;
        }while (denominador==0);
        fracciones[i].setDen(denominador);
    }
    for(int i=0; i<5; i++){
        fracciones[i].imprimeFraccion();
    }
    cout<<"Suma de las 3 primeras fracciones: "<<endl;
    Fraccion suma1 = fracciones[0].sumaFracciones(fracciones[1]);
    Fraccion suma2 = suma1.sumaFracciones(fracciones[2]);
    suma2.imprimeFraccion(); 

    return 0;
}

