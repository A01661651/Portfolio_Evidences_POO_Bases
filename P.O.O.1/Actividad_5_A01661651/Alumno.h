#include <iostream>
using namespace std;

class Alumno{
    private:
        string matricula; 
        string nombre;
        int edad;
        string carrera;
    public:
        Alumno(string matricula, string nombre, int edad, string carrera);
        string getMatricula();
        string getNombre();
        int getEdad();
        string getCarrera();
        void setMatricula( string matricula);
        void setNombre( string nombre);
        void setEdad(int edad);
        void setCarrera(string carrera);
        void imprimeAlumno(); 
        void cumple();
};
Alumno::Alumno(string matricula, string nombre, int edad, string carrera){
    this -> matricula = matricula;
    this -> nombre = nombre;
    this -> edad = edad;
    this -> carrera = carrera;
}
string Alumno::getMatricula(){
    return matricula;
}
string Alumno::getNombre(){
    return nombre;
}
int Alumno::getEdad(){
    return edad;
}
string Alumno::getCarrera(){
    return carrera;
}
void Alumno::setMatricula(string matricula){
    this->matricula = matricula;
}
void Alumno::setNombre(string nombre){
     this->nombre = nombre;
}
void Alumno::setEdad(int edad){
     this->edad = edad;
}
void Alumno::setCarrera(string carrera){
     this->carrera=carrera;
}
void Alumno::imprimeAlumno(){
    cout<<"Matrícula: "<<matricula<< "\n Nombre: "<<nombre<< "\n Edad: "<<edad<< "\n Carrera: "<<carrera<<endl;
}
void Alumno::cumple(){
    edad= edad+1;
}
