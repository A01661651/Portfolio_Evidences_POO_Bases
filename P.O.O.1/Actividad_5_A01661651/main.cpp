#include <iostream>
#include "Alumno.h"
using namespace std;

int main(){
    cout<<""<<endl;
    Alumno alumnoA("A01661651", "Jose Andres Rodríguez Ruiz", 18, "ITC");
    alumnoA.imprimeAlumno();
    alumnoA.cumple();
    alumnoA.imprimeAlumno();
    cout<<""<<endl;
    Alumno alumnoB("A01398261", "Juan Carlos Guerrero Plata", 19, "LIN");
    alumnoB.imprimeAlumno();
    alumnoB.cumple();
    alumnoB.imprimeAlumno();
    cout<<""<<endl;
    Alumno alumnoC("A01692750", "Alejandro Figueroa Fuentes", 17, "LCPF");
    alumnoC.imprimeAlumno();
    alumnoC.cumple();
    alumnoC.imprimeAlumno();
    cout<<""<<endl;
    Alumno alumnoD("A01879320", "Iker Alonso Rodriguez Ruiz", 7, "MC");
    alumnoD.imprimeAlumno();
    alumnoD.cumple();
    alumnoD.imprimeAlumno();

    return 0;
}