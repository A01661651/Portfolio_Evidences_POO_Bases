#include "Camion.h"

Camion::Camion(){
    destino = "Sin destino";
}
Camion::~Camion(){

}
Camion::Camion(string destino){
    this->destino=destino;
}
void Camion::agregarPasajero(Pasajero pasajero, int lugar){
    pasajeros[lugar]=pasajero;

}
void Camion::imprimeCamion(){
    cout<<"El camion con destino a "<<destino<<" tiene a los pasajeros: "<<endl;
    for (int i=0;i<50;i++){
        pasajeros[i].imprimePasajero();
    }
}
int Camion::calculaTotal(){
    int total=0;
    int costbol = 600;
    for (int i=0;i<50;i++){
        if(pasajeros[i].getNombre()== "Sin nombre"){
            total=total + costbol;
        }
    }    
    return total;
}
