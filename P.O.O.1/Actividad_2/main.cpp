#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

    //Ejercicio 1

int operaNumeros(string opcion){
    if(opcion=="S"||opcion=="s"||opcion=="Suma"){
        return 1;
    }
    if(opcion=="R"||opcion=="r"||opcion=="Resta"){
        return 2;
    }    
    if(opcion=="M"||opcion=="m"||opcion=="Multiplicacion"){
        return 3;
    }
    return -1;
}

int main(){

    cout<<" "<<endl;
    cout<<"Ejercicio 1: "<<endl;
    cout<<" "<<endl;
    
    string opcion;
    do{
        cout<<"Dame la opción que quieres: \n S) Suma \n R) Resta \n M) Multiplicación \n Cualquier Tecla) Salir"<<endl;
        cin>>opcion;
        if(operaNumeros(opcion)>0){
            float num1;
            float num2;
            cout<<"Ingrese el número 1: "<<endl;
            cin>>num1;
            cout<<"Ingrese el número 2: "<<endl;
            cin>>num2;
            float resultado=0;
            switch(operaNumeros(opcion)){
                case 1:
                    resultado=num1+num2;
                    break;
                case 2: 
                    resultado=num1-num2;
                    break;
                case 3:
                    resultado=num1*num2;
                    break;
                default:
                    cout<<"Opción incorrecta"<<endl;
                    break;
                
            }   
            cout<<"El Resultado es "<<resultado<<endl; 

        }

    }while(operaNumeros(opcion)>0);
    
    //Ejercicio 2

        cout<<" "<<endl;
        cout<<"Ejercicio 2: "<<endl;
        cout<<" "<<endl;
        
        int numero;
        cout<<"Ingrese un número: "<<endl;
        cin>>numero;
        while(numero%2==0){
            cout<<"Ingrese un número: "<<endl;
            cin>>numero;
        }
    
    //Ejercicio 3


        cout<<" "<<endl;
        cout<<"Ejercicio 3: "<<endl;
        cout<<" "<<endl;
    
        int suma=0;
        for (int i=0;i<=100;i+=2){
            suma+=i;
        }
        cout<<"El resultado de la suma de pares de 0 a 100 es "<<suma<<endl;

    //Ejercicio 4

        cout<<" "<<endl;
        cout<<"Ejercicio 4: "<<endl;
        cout<<" "<<endl;

        cout<<"Ingresa la cantidad de números que ingresará: "<<endl;
        float cantidad4;
        cin>>cantidad4;
        float sumaej4=0;
        cout<<"Suma: "<<sumaej4<<endl;
        for (int i=0;i<cantidad4;i++){
            cout<<"Dame el numero: "<<endl;
            float n4;
            cin>>n4;
            sumaej4+=n4;
        }
        float medarit;
        medarit=(sumaej4/cantidad4);
        cout<<"Suma: "<<sumaej4<<endl;
        cout<<"Numeros: "<<cantidad4<<endl;
        cout<<"La media aritmetica es: "<<medarit<<endl;
    
    
    //Ejercicio 5

        cout<<" "<<endl;
        cout<<"Ejercicio 5: "<<endl;
        cout<<" "<<endl;

        srand(time(0));
        int aleatorio= rand()%((100-0)+1);
        int numeroAdivinado=0;
        int intentos=1;


        do{
            cout<<"Ahora adivina: "<<endl;
            cin>>numeroAdivinado;
            if(aleatorio>numeroAdivinado){
                cout<<"Mas"<<endl;
            }else if(aleatorio<numeroAdivinado){
                cout<<"Menos"<<endl;
            }else{
                cout<<"Adivinaste!! el número era "<<aleatorio<<" en "<<intentos<<" intentos "<<endl;
            }
            intentos++;

        }while(numeroAdivinado!=aleatorio); 
    
    //Ejercicio 6
    
    cout<<" "<<endl;
    cout<<"Ejercicio 6: "<<endl;
    cout<<" "<<endl;

    int celsius, conversiones, incremento;  

    cout<<"Dame los grados en Celisius: ";
    cin>>celsius;

    cout<<"Cuantas conversiones se haran: ";
    cin>>conversiones;

    cout<<"Dame el rango de incremento entre los valores Celsius: ";
    cin>>incremento;

    int sumagrados=celsius;

    cout<<"Conversión de grados Celsius a Farenheit "<<endl;

    cout<<"Farenheit"<<"                    "<<"Celsius"<<endl;


    for(int i=0; i<conversiones; i++){
        float  Farenheit=(sumagrados*9/5)+32;
        cout<<Farenheit<<"                           "<<sumagrados<<endl;      
        sumagrados=sumagrados+incremento;
    }
    
    //Ejercicio 7:

    cout<<" "<<endl;
    cout<<"Ejercicio 7: "<<endl;
    cout<<" "<<endl;

    int a=1;
    int d=3;
    int n=25;
    int sumaej7=0;
    for (int i7=0;i7<n+2;i7++){
        int form;
        form = a+(i7-1)*d;
        sumaej7+=form;
    }
    cout<<"El valor total de la serie es : "<<sumaej7;
    
    //Ejercicio 8:
    
    cout<<" "<<endl;
    cout<<"Ejercicio 8: "<<endl;
    cout<<" "<<endl;

    float medgeo=1;
    float medarm=0;
    float n8;
    int counter=0;
    do{
        cout<<"Ingresa un número: ";
        cin>>n8;
        if (n8 != 0){
        medgeo *= n8;
        counter+= 1;
        medarm+=1/n8;
        }else{
            break;
        }
    }while(n8!=0);
    cout<<"C: "<<counter<<endl;
    medgeo = pow(medgeo, (double)1/counter);
    medarm= counter/medarm;
    cout<<"Media geométrica es: "<<medgeo<<endl;
    cout<<"Media armónica es: "<<medarm<<endl;

    return 0;
}
