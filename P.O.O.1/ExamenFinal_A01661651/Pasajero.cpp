#include "Pasajero.h"

Pasajero::Pasajero(){
    apellidopat="Sin apellido paterno";
    apellidomat="Sin apellido materno";
    nombre="Sin Nombre";
    asiento=0;
}
Pasajero::~Pasajero(){

}
Pasajero::Pasajero(string apellidopat, string apellidomat){
    this->apellidopat=apellidopat;
    this->apellidomat=apellidomat;
    nombre="Sin Nombre";
    asiento=0;
}
Pasajero::Pasajero(string apellidopat, string apellidomat, string nombre){
    this->apellidopat=apellidopat;
    this->apellidomat=apellidomat;
    this->nombre=nombre;
    asiento=0;
}
Pasajero::Pasajero(string apellidopat, string apellidomat, string nombre, int asiento){
    this->apellidopat=apellidopat;
    this->apellidomat=apellidomat;
    this->nombre=nombre;
    this->asiento=asiento;
}
string Pasajero::getApellidopat(){
    return apellidopat;
}
string Pasajero::getApellidomat(){
    return apellidomat;
}
string Pasajero::getNombre(){
    return nombre;
}
int Pasajero::getAsiento(){
    return asiento;
}
void Pasajero::setApellidopat(string apellidopat){
    this->apellidopat=apellidopat;
}
void Pasajero::setApellidomat(string apellidomat){
    this->apellidomat=apellidomat;
}
void Pasajero::setNombre(string nombre){
    this->nombre=nombre;
}
void Pasajero::setAsiento(int asiento){
    this->asiento=asiento;
}
void Pasajero::imprimePasajero(){
    cout<<"Pasajero: "<< apellidopat<< " "<<apellidomat<<nombre<<calificacion<<endl;
}
