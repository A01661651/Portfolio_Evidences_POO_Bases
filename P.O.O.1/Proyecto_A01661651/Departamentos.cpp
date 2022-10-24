#include <iostream>
#include "Departamentos.h"          //Incluyo mi header

//Cree mi "Departamentos.cpp" para distribuir mi espacio de trabajo adecuadamente
Categoria::Categoria(){             //Implemento los parámetros de mi constructor por defecto    
    cat="Sin categoria";
}
Categoria::Categoria(string cat){       //Implemento los parámetros de mi constructor con parametros
    this->cat=cat;
}
ListaDeProducto Categoria::getTipo(){           //Establezco como obtener un tipo mediante mi ListaDeProductos
    return tipos;
}
void Categoria::agregarOpcion(Tipo tipo, int lugar){        //Hago mi método agregarOpcion
    tipos.tipos[lugar]=tipo;
}
void Categoria::imprimeCategoria(){
    cout<<"La categoria: "<<cat<<" tiene las opciones: "<<endl;     //Hago mi método para imprimir una categoría
    for (int i=0;i<10;i++){
        tipos.tipos[i].imprimeTipoSelect();
    }
}
Tipo Categoria::productoEnPos(Tipo tipo, int lugar){            //Implemento mi método para obtener la posición de un objeto
    tipos.tipos[lugar]=tipo;
    return tipo;
}
Categoria::~Categoria(){                //Mi destructor lo establezco
}