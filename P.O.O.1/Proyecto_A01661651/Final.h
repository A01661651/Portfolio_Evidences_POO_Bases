#ifndef CARRITO_DEFINED
#define CARRITO_DEFINED
#include <string>
#include "Tipo.h"               //Incluyo mi header de Tipo para poder utilizarlo en la clase Carrito
#include "Departamentos.h"      //Incluyo mi header de Departamentos para poder utilizarlo en la clase Carrito
using namespace std;


class Carrito{
    private:                        //Declaro mis atributos privados
        ListaDeProductos tipos;
    public:                         //Declaro mis atributos publicos
        Carrito();                  //Implemento un constructor por defecto
        Carrito(ListaDeProductos tipos);        //Hago mi metodo para obtener un tipo
        ~Carrito();                     //Implemento un destructor por defecto
        void agregarACarrito(Tipo tipo, int pos);           //Hago mi método para agregar al carrito los objetos
        double calcTotal();                         //Hago mi método para calcular el total del carrito
        void imprimeCarrito();              //Método para imprimir el carrito
};
#endif