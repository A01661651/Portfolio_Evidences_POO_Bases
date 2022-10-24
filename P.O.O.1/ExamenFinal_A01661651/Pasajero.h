#include <iostream>
using namespace std;

class Pasajero{
    private:
        string nombre;
        string apellidopat;
        string apellidomat;
        int asiento;
    public:
        Pasajero();
        ~Pasajero();
        Pasajero(string apellidopat, string apellidomat);
        Pasajero(string apellidopat, string apellidomat, string nombre);
        Pasajero(string apellidopat, string apellidomat, string nombre, int asiento);
        string getApellidopat();
        string getApellidomat();
        string getNombre();
        int getAsiento();
        void setApellidopat(string apellidopat);
        void setApellidomat(string apellidomat);
        void setNombre(string nombre);
        void setAsiento(int asiento);
        void imprimePasajero();


}