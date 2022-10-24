#include <iostream>
using namespace std;
#include "Pasajero.h"
#include "Camion.h"

int desicionPasaj(string decision){
    if(decision=="Si"||decision=="si"||decision=="SI"){
        return 1;
    }
    else{
        return 0;
    }
    return -1;
}
/*int desicionOtroPasaj(string otropas){
    if(otropas=="Si"||decision=="si"||decision=="SI"){
        return 1;
    }
    else{
        return 0;
    }
    return -1;
}*/

int main(){
    
    Pasajero
    
    Camion c1(destinoing);
    
    cout<<"Buen día Sr(a), le agradecémos su preferencia de viajar en 'Caminos Seguros de México', A DONDE VAYA LA ACOMPAÑAMOS :))"<<endl;
    string destinoing;
    cout<<"Ingrese el destino al que se dirige: "<<endl;
    cin>> destinoing;
    string decision;
    cout<<"Perfecto, hay un camión que parte a "<<destinoing<<", ¿Desea abordarlo?"<<endl;
    cin>>decision;
    if(desicionPasaj(decision)>0){
        cout<<"Perfecto, comenzemos con su registro."<<endl;
        cout<<"Cuantos boletos quiere?"<<endl;
        string boldeseados;
        cin>>boldeseados;
        for (int i=0;i<boldeseados;i++){
            cout<<"Ingrese el asiento deseado del 1-49: "<<endl;
            int asientoing;
            cin>>asientoing;
            if(asientoing<50){
                string apellidopating;
                string apellidomating;
                string nombreing;
                cout<<"Ingrese el apellido paterno del pasajero: "<<endl;
                cin>>apellidopating;
                cout<<"Ingrese el apellido materno del pasajero: "<<endl;
                cin>>apellidomating;
                cout<<"Ingrese el nombre del pasajero: "<<endl;
                cin>>nombreing;
                cout<<"Ingrese el asiento deseado del 1-49: "<<endl;
                cin>>asientoing;
                Pasajero p[i](apellidopating, apellidomating,nombreing,asientoing);
                Camion c1(destinoing);
                c1.agregarPasajero(p[i],i);
            }
            else{
                cout<<"Ingrese un asiento válido."<<endl;
            }
        }
    }
    else{
        cout<<"Perfecto, lindo día, hasta luego :)"<<endl;
    } 
        
        
        
        
        
        
        /*string otropas;
        do{
            string apellidopating;
            string apellidomating;
            string nombreing;
            int asientoing;
            cout<<"Ingrese el asiento deseado del 1-49: "<<endl;
            cin<<asientoing;
            if(asientoing<50){
                if(pasajeros[i].getNombre()== "Sin nombre"){
                    cout<<"Ingrese el apellido paterno del pasajero: "<<endl;
                    cin<<apellidopating;
                    cout<<"Ingrese el apellido materno del pasajero: "<<endl;
                    cin<<apellidomating;
                    cout<<"Ingrese el nombre del pasajero: "<<endl;
                    cin<<nombreing;
                    cout<<"Desea comprar otro boleto? "<<endl;
                    string otropas;
                    cin>>otropas;
                    int i=0;
                    Pasajero p[i++](apellidopating,apellidomating,nombreing,asientoing);
                }
            }
            else{
            cout<<"Ingrese un asiento válido."<<endl;
            }
        }while(desicionOtroPasaj(otropas)>0);
    }
    else{
        cout<<"Perfecto, lindo día, hasta luego :)"<<endl;
    }*/
    



    return 0;
}