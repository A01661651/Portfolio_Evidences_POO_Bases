#ifndef TIPO_DEFINED            //Le digo al programa que defina TIPO si es que no esta definido
#define TIPO_DEFINED
#include <string>
using namespace std;

class Tipo{             //Implemento mi clase "Tipo"

    private:            //Declaro mis atributos privados
        string marca;
        string producto;
        double precio;
        string folio;

    public:              //Declaro mis atributos publicos
        Tipo();     //Implemento un constructor por defecto
        ~Tipo();    //Implemento un destructor por defecto
        Tipo(string marca, string producto);                                //Implemento mis constructores con parametros
        Tipo(string marca, string producto,double precio);
        Tipo(string marca, string producto,double precio, string folio);
        //Impelemento mis sets 
        void setMarca(string marca);
        void setProducto(string producto);
        void setPrecio(double precio);
        void setFolio(string folio);
        //Implemento mis gets
        string getMarca();
        string getProducto();
        double getPrecio();
        string getFolio();
        //Implemento mi función de imprimir tipo
        void imprimeTipoSelect();
};
#endif



