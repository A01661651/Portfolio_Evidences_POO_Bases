#include <iostream>
#include "Tipo.h"       //Incluyo mi header de tipo

//Cree mi "Tipo.cpp" para distribuir mi espacio de trabajo adecuadamente
Tipo::Tipo(){               //Implemento los parámetros de mi constructor por defecto
    marca="Sin marca";
    producto="Sin proctucto";
    precio=0;
    folio="Sin folio";
}
Tipo::Tipo(string marca, string producto){           //Implemento los parámetros de mi constructor con parametros
    this->marca=marca;
    this->producto=producto;
    precio=0;
    folio="Sin folio";
}
Tipo::Tipo(string marca, string producto,double precio){             //Implemento los parámetros de mi constructor con parametros
    this->marca=marca;
    this->producto=producto;
    this->precio=precio;
    folio="Sin folio";
}
Tipo::Tipo(string marca, string producto,double precio, string folio){           //Implemento los parámetros de mi constructor con parametros
    this->marca=marca;
    this->producto=producto;
    this->precio=precio;
    this->folio=folio;
}
//Implemento mis setters
void Tipo::setMarca(string marca){
    this->marca=marca;
}
void Tipo::setProducto(string producto){
    this->producto=producto;
}
void Tipo::setPrecio(double precio){
    this->precio=precio;
}
void Tipo::setFolio(string folio){
    this->folio=folio;
}
//Implemento mis getters
string Tipo::getMarca(){
    return marca;
}
string Tipo::getProducto(){
    return producto;
}
double Tipo::getPrecio(){
    return precio;
}
string Tipo::getFolio(){
    return folio;
}

//Defino mi funcion de imprimir tipo
void Tipo::imprimeTipoSelect(){
    cout<<""<<endl;
    cout<<"Marca: "<<marca<< endl;
    cout<<"Producto: "<<producto<<endl;
    cout<<"Precio: "<<precio<<endl;
    cout<<"Folio: "<<folio<<endl; 
    cout<<""<<endl;
}
//Mi destructor lo establezco
Tipo::~Tipo(){
    
}
