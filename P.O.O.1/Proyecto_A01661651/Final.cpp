#include <iostream>
#include "Final.h"          //Incluyo mi header de Final

//Cree mi "Fianl.cpp" para distribuir mi espacio de trabajo adecuadamente

Carrito::Carrito(){              //Implemento los parámetros de mi constructor por defecto    
    //articulo="Sin articulo";
}
Carrito::~Carrito(){                    //Mi destructor lo establezco
}
void Carrito::agregarACarrito(Tipo tipo, int pos){          //Establezco todos los métodos que utilizaré
    tipos.tipos[pos]=tipo;
}
double Carrito::calcTotal(){
    double total=0;
    for (int i=0;i<40;i++){
        total+= tipos.tipos[i].getPrecio();
    }
    return total;
}
void Carrito::imprimeCarrito(){
    for (int i=0;i<40;i++){
        if(tipos.tipos[i].getProducto()!="Sin proctucto"){
            tipos.tipos[i].imprimeTipoSelect();
        }
    }
}