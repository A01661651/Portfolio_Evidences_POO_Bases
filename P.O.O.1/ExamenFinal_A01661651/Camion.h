#include <iostream>
using namespace std;

class Camion{
    private:
        string destino;
        Pasajero pasajeros[50];
    public:
        Camion();
        ~Camion();
        Camion(string destino);
        void agregarPasajero(Pasajero pasajero, int lugar);
        void imprimeCamion();
        int calculaTotal();

}