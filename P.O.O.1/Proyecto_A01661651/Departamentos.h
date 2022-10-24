#ifndef CATEGORIA_DEFINED           //Le digo al programa que defina "CATEGORIA" si es que no esta definido
#define CATEGORIA_DEFINED
#include <string>
#include "Tipo.h"                   //Incluyo mi header de Tipo para poder utilizarlo en la clase categoria

typedef struct ListaDeProductos{
    Tipo tipos[40];                             //Uso una estructura definida para poder regresar (return) listas
}ListaDeProducto;

class Categoria{
    private:                        //Declaro mis atributos privadas
        string cat;
        ListaDeProductos tipos;

    public:                             //Declaro mis atributos publicas
        Categoria();                    //Implemento un constructor por defecto
        ~Categoria();                   //Implemento un destructor por defecto
        Categoria(string cat);          //Implemento mi constructor con parametros
        ListaDeProducto getTipo();      //Implemento mi ListaDeProducto con mi getter de tipo
        void agregarOpcion(Tipo tipo, int lugar);       //Creo un método para agregar un tipo a una categoriay establezco sus parametros
        void imprimeCategoria();                        //Creo un método para imprimir la categoría
        Tipo productoEnPos(Tipo tipo, int lugar);       //Creo un metodo para obtener la posicion de un producto
};
#endif