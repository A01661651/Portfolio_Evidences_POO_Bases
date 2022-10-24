#include <iostream>
#include "Tipo.h"
#include "Tipo.cpp"
#include "Departamentos.h"
#include "Departamentos.cpp"
#include "Final.h"
#include "Final.cpp"
using namespace std;

//Esta parte del programa busca convertir los strings de las categorías en integers e incluso cubrir la mayor posibilidad de opciones ingresables por el usuario.
int opcionDeseada(string opcion){
    if(opcion=="LUJO"||opcion=="lujo"||opcion=="Lujo"||opcion=="l"||opcion=="L"){
        return 1;
    }
    if(opcion=="DEPORTIVA"||opcion=="deportiva"||opcion=="Deportiva"||opcion=="d"||opcion=="D"){
        return 2;
    }    
    if(opcion=="COMERCIAL"||opcion=="comercial"||opcion=="Comercial"||opcion=="c"||opcion=="C"){
        return 3;
    }
    if(opcion=="ELECTRONICA"||opcion=="ELECTRÓNICA"||opcion=="electronica"||opcion=="electrónica"||opcion=="Electrónica"||opcion=="Electronica"||opcion=="E"||opcion=="e"){
        return 4;
    }
    return -1;
}

int main(){
    //Estos son los productos de mi primer categoría, los cuales posteriormente agregare a la categoria "Lujo"
    Tipo l1("Gucci", "Sudadera",20000, "0");
    Tipo l2("LV", "Cinturon",12000, "1");
    Tipo l3("Dolce", "Playera",6000, "2");
    Tipo l4("Amiri", "Jeans",9000, "3");
    Tipo l5("Ferragamo", "Tennis",7000, "4");
    Tipo l6("Burberry", "Camisa",10000, "5");
    Tipo l7("Aape", "Playera",5000, "6");
    Tipo l8("Balenciaga", "Sudadera",16000, "7");
    Tipo l9("Moschino", "Jeans",7500, "8");
    Tipo l10("Balmain", "Sueter",9000, "9");
    
    //Estos son los productos de mi segunda categoría, los cuales posteriormente agregare a la categoria "Deportiva"
    Tipo d1("Puma","Leggins",1300, "0");
    Tipo d2("Adidas", "Pants", 800, "1");
    Tipo d3("Jordan", "Sudadera", 1500, "2");
    Tipo d4("Nike", "Playera", 600, "3");
    Tipo d5("Under Armour", "Cubrebocas", 700, "4");
    Tipo d6("Reebok","Pants",800, "5");
    Tipo d7("Umbro", "Guantes", 600, "6");
    Tipo d8("Jordan", "Short", 900, "7");
    Tipo d9("Nike", "Calentador de cuello", 800, "8");
    Tipo d10("Under Armour", "Mallas", 400, "9");

    //Estos son los productos de mi tercer categoría, los cuales posteriormente agregare a la categoria "Comercial"
    Tipo co1("GAP","Sudadera",1500, "0");
    Tipo co2("American Eagle", "Jeans", 1200, "1");
    Tipo co3("Armani Exchange", "Playera", 800, "2");
    Tipo co4("Tommy Hilfiger", "Pants", 600, "3");
    Tipo co5("POLO Ralph Lauren", "Playera Polo", 1200, "4");
    Tipo co6("BOSS","Camisa",2000, "5");
    Tipo co7("Zara", "Jeans", 1000, "6");
    Tipo co8("Lacoste", "Sudadera", 1700, "7");
    Tipo co9("Hackett", "Playera polo", 1500, "8");
    Tipo co10("Purificación García", "Sueter", 1100, "9");

    //Estos son los productos de mi cuarta y última categoría, los cuales posteriormente agregare a la categoria "Electrónica"
    Tipo e1("Sony","Playstation 5",11000, "0");
    Tipo e2("Samsung", "Galaxy Note 8", 15000, "1");
    Tipo e3("Apple", "Macbook Pro", 53500, "2");
    Tipo e4("HP", "Impresora laserjet", 6000, "3");
    Tipo e5("Microsoft", "X box Series X", 12000, "4");
    Tipo e6("LG","Pantalla 8k",60000, "5");
    Tipo e7("Bowers & Wilkins", "Subwoofer", 13000, "6");
    Tipo e8("Harman Kardon", "Bocina con 3 micrófonos integrados", 9500, "7");
    Tipo e9("Onkyo", "Teatro en casa", 35000, "8");
    Tipo e10("Alienware", "Computadora gamer", 55000, "9");
    
    //Estas son el número de categorías que crearé, y las declaro aquí
    Categoria categorias[4];

    //Aquí declaro mi categoría "Lujo" y agrego los productos correspondientes a esta
    Categoria c1("Lujo");
    c1.agregarOpcion(l1,0);
    c1.agregarOpcion(l2,1);
    c1.agregarOpcion(l3,2);
    c1.agregarOpcion(l4,3);
    c1.agregarOpcion(l5,4);
    c1.agregarOpcion(l6,5);
    c1.agregarOpcion(l7,6);
    c1.agregarOpcion(l8,7);
    c1.agregarOpcion(l9,8);
    c1.agregarOpcion(l10,9);
    
    //Aquí declaro mi categoría "Deportiva" y agrego los productos correspondientes a esta
    Categoria c2("Deportiva");
    c2.agregarOpcion(d1,0);
    c2.agregarOpcion(d2,1);
    c2.agregarOpcion(d3,2);
    c2.agregarOpcion(d4,3);
    c2.agregarOpcion(d5,4);
    c2.agregarOpcion(d6,5);
    c2.agregarOpcion(d7,6);
    c2.agregarOpcion(d8,7);
    c2.agregarOpcion(d9,8);
    c2.agregarOpcion(d10,9);


    //Aquí declaro mi categoría "Comercial" y agrego los productos correspondientes a esta
    Categoria c3("Comercial");
    c3.agregarOpcion(co1,0);
    c3.agregarOpcion(co2,1);
    c3.agregarOpcion(co3,2);
    c3.agregarOpcion(co4,3);
    c3.agregarOpcion(co5,4);
    c3.agregarOpcion(co6,5);
    c3.agregarOpcion(co7,6);
    c3.agregarOpcion(co8,7);
    c3.agregarOpcion(co9,8);
    c3.agregarOpcion(co10,9);
        
    //Aquí declaro mi categoría "Electrónica" y agrego los productos correspondientes a esta
    Categoria c4("Electrónica");
    c4.agregarOpcion(e1,0);
    c4.agregarOpcion(e2,1);
    c4.agregarOpcion(e3,2);
    c4.agregarOpcion(e4,3);
    c4.agregarOpcion(e5,4);
    c4.agregarOpcion(e6,5);
    c4.agregarOpcion(e7,6);
    c4.agregarOpcion(e8,7);
    c4.agregarOpcion(e9,8);
    c4.agregarOpcion(e10,9);

    //Declaro mi carrito con la clase Carrito
    Carrito carrito;

    //Comienzo a desplegar mis cout's con la bienvenida y explicación del menú al usuario
    cout<<""<<endl;
    cout<<"BIENVENIDO A 'CASTILLO DE DIAMANTE' SU TIENDA DEPARTAMENTAL QUE CUENTA TANTO CON LOS ARTÍCULOS COMO CON LOS CLIENTES MÁS EXCLUSIVOS DE MÉXICO"<<endl;
    cout<<"Nos alegra mucho su visita y nos encantaría saber quién visita nuestro sitio web el día de hoy"<<endl;
    string apellidopat;
    cout<<"Favor de ingresar su Apellido Paterno: "<<endl;           //Pido al cliente ingresar su apellido paterno   
    cin>>apellidopat;
    string apellidomat;
    cout<<"Favor de ingresar su Apellido Materno: "<<endl;           //Pido al cliente ingresar su apellido materno   
    cin>>apellidomat;
    string nombrecliente;
    cout<<"Favor de ingresar su Nombre: "<<endl;                    //Pido al cliente ingresar su nombre   
    cin>>nombrecliente;
    cout<<""<<endl;
    cout<<"Perfecto Sr(a)"<<nombrecliente<<" "<<apellidopat<<" "<<apellidomat<<" sea bienvenid@ a 'CASTILLO DIAMANTE'."<<endl;  //Despliego su nombre
    cout<<""<<endl;   
    cout<<"¿Que desea hacer?"<<endl;
    cout<<""<<endl;  
    
    int menu;
    do{             //Utilizo un do while que repita el menu hasta que el usuario decida ir a checkout y terminar su compra
        cout<<"MENU \n 1) Ver catálogo. \n 2) Ver Carrito. \n 0) Checkout.(OJO, no podrás regresar si escoges esta opción)"<<endl;   
        cin>>menu;
        string opcion;
        if(menu==1){            //Implemento un if para desplegar mi catalogo con todas las categorias anteriormente elaboradas
            do{
                int numarticulo;
                int lugarencarrito;
                cout<<"Ingrese la categoria que desea ver : \n Lujo \n Deportiva \n Comercial \n Electrónica \n Cualquier Tecla) Salir al MENU"<<endl;
                cin>>opcion;
                if(opcionDeseada(opcion)>0){
                    int decision;
                    switch(opcionDeseada(opcion)){              //Implemento un switch utilizando la conversion de string a integer implementada al inicio antes del main
                        case 1:
                            cout<<"Opción elegida: "<<opcion<<endl;        //Si la opcion elegida es la de "Lujo", despliego los artículos que se encuentran dentro de esta para que el usuario pueda escoger libremente sus artículos preferidos
                            cout<<""<<endl;
                            c1.imprimeCategoria();
                            //int decision;
                            cout<<"¿Desea agregar al carrito algún(os) artículo(s) de nuestra sección "<<opcion<<"? \n 1)Sí \n 0)No"<<endl;         //Pregunto al usuario si va a decidir agregar al carrito algún artículo, y si este es el caso, indique la cantidad de estos
                            cin>>decision;
                            if(decision>0){
                                cout<<"Ingrese el número de productos que agregara al carrito: "<<endl;
                                int numdearticulos;
                                cin>>numdearticulos;
                                for (int i=1;i<numdearticulos+1;i++){                                   //Implemento un for donde el maximo sea el numero de articulos que el usuario dijo que agregaria al carrito e irlos agregando al carrito mediante agragarACarrito
                                    cout<<"Ingrese el folio del producto "<<i<<" deseado: "<<endl;
                                    cin>>numarticulo;
                                    cout<<"Ingrese el lugar deseado en el carrito: "<<endl;
                                    cin>>lugarencarrito;
                                    carrito.agregarACarrito(c1.getTipo().tipos[numarticulo],lugarencarrito);
                                    cout<<""<<endl;
                                }
                            }
                            else{
                                cout<<""<<endl;             //Utilizo un else en caso de que el usuario no se haya convencido por algún artículo y le despliego un mensaje en pantalla para persuadirlo a seguir comprando
                                cout<<"Perfecto, quizá le interese algún producto de nuestras otras categorías :)"<<endl;
                                cout<<""<<endl;
                            }
                            break;
                        case 2: 
                            cout<<"Opción elegida: "<<opcion<<endl;        //Si la opcion elegida es la de "Dperotiva", despliego los artículos que se encuentran dentro de esta para que el usuario pueda escoger libremente sus artículos preferidos
                            cout<<""<<endl;
                            c2.imprimeCategoria();
                            cout<<"¿Desea agregar al carrito algún(os) artículo(s) de nuestra sección "<<opcion<<"? \n 1)Sí \n 0)No"<<endl;     //Pregunto al usuario si va a decidir agregar al carrito algún artículo, y si este es el caso, indique la cantidad de estos
                            cin>>decision;
                            if(decision>0){
                                cout<<"Ingrese el número de productos que agregara al carrito: "<<endl;
                                int numdearticulos;
                                cin>>numdearticulos;
                                for (int i=1;i<numdearticulos+1;i++){                                 //Implemento un for donde el maximo sea el numero de articulos que el usuario dijo que agregaria al carrito e irlos agregando al carrito mediante agragarACarrito
                                    cout<<"Ingrese el folio del producto "<<i<< "deseado: "<<endl;
                                    cin>>numarticulo;
                                    cout<<"Ingrese el lugar deseado en el carrito: "<<endl;
                                    cin>>lugarencarrito;
                                    carrito.agregarACarrito(c2.getTipo().tipos[numarticulo],lugarencarrito);
                                }
                            }
                            else{                           //Utilizo un else en caso de que el usuario no se haya convencido por algún artículo y le despliego un mensaje en pantalla para persuadirlo a seguir comprando
                                cout<<""<<endl;
                                cout<<"Perfecto, quizá le interese algún producto de nuestras otras categorías :)"<<endl;
                                cout<<""<<endl;
                            }
                            break;
                        case 3:
                            cout<<"Opción elegida: "<<opcion<<endl;         //Si la opcion elegida es la de "Comercial", despliego los artículos que se encuentran dentro de esta para que el usuario pueda escoger libremente sus artículos preferidos
                            cout<<""<<endl;
                            c3.imprimeCategoria();
                            cout<<"¿Desea agregar al carrito algún artículo de nuestra sección "<<opcion<<"? \n 1)Sí \n 0)No"<<endl;        //Pregunto al usuario si va a decidir agregar al carrito algún artículo, y si este es el caso, indique la cantidad de estos
                            cin>>decision;
                            if(decision>0){
                                cout<<"Ingrese el número de productos que agregara al carrito: "<<endl;
                                int numdearticulos;
                                cin>>numdearticulos;
                                for (int i=1;i<numdearticulos+1;i++){
                                    cout<<"Ingrese el folio del producto "<<i<< " deseado: "<<endl;             //Implemento un for donde el maximo sea el numero de articulos que el usuario dijo que agregaria al carrito e irlos agregando al carrito mediante agragarACarrito
                                    cin>>numarticulo;
                                    cout<<"Ingrese el lugar deseado en el carrito: "<<endl;
                                    cin>>lugarencarrito;
                                    carrito.agregarACarrito(c3.getTipo().tipos[numarticulo],lugarencarrito);
                                }
                            }
                            else{                           //Utilizo un else en caso de que el usuario no se haya convencido por algún artículo y le despliego un mensaje en pantalla para persuadirlo a seguir comprando
                                cout<<""<<endl;
                                cout<<"Perfecto, quizá le interese algún producto de nuestras otras categorías :)"<<endl;
                                cout<<""<<endl;
                            }
                            break;
                        case 4:
                            cout<<"Opción elegida: "<<opcion<<endl;         //Si la opcion elegida es la de "Electrónica", despliego los artículos que se encuentran dentro de esta para que el usuario pueda escoger libremente sus artículos preferidos
                            cout<<""<<endl;
                            c4.imprimeCategoria();
                            cout<<"¿Desea agregar al carrito algún artículo de nuestra sección "<<opcion<<"? \n 1)Sí \n 0)No"<<endl;        //Pregunto al usuario si va a decidir agregar al carrito algún artículo, y si este es el caso, indique la cantidad de estos
                            cin>>decision;
                            if(decision>0){
                                cout<<"Ingrese el número de productos que agregara al carrito: "<<endl;
                                int numdearticulos;
                                cin>>numdearticulos;
                                for (int i=1;i<numdearticulos+1;i++){                                              //Implemento un for donde el maximo sea el numero de articulos que el usuario dijo que agregaria al carrito e irlos agregando al carrito mediante agragarACarrito
                                    cout<<"Ingrese el folio del producto "<<i<< " deseado: "<<endl;
                                    cin>>numarticulo;
                                    cout<<"Ingrese el lugar deseado en el carrito: "<<endl;
                                    cin>>lugarencarrito;
                                    carrito.agregarACarrito(c4.getTipo().tipos[numarticulo],lugarencarrito);
                                }
                            }
                            else{                   //Utilizo un else en caso de que el usuario no se haya convencido por algún artículo y le despliego un mensaje en pantalla para persuadirlo a seguir comprando
                                cout<<""<<endl;
                                cout<<"Perfecto, quizá le interese algún producto de nuestras otras categorías :)"<<endl;
                                cout<<""<<endl;
                            }
                            break;
                        default:
                            cout<<"Invalido"<<endl;
                            break;
                    }    
                }

            }while(opcionDeseada(opcion)>0);
        }
        if(menu==2){                        //Si el numero ingresado por el usuario en el menu es 2) entonces despliego el carrito y su total hasta el momento usando mis métodos
            cout<<""<<endl;
            cout<<"Opcion elegida: VerCarrito "<<endl;
            cout<<""<<endl;
            carrito.imprimeCarrito();
            cout<<"El total de su carrito es de: $"<<carrito.calcTotal()<<endl;
            cout<<""<<endl;
        }
    }while(menu>0);
    cout<<"-----------------------------------------"<<endl;
    cout<<"CHECKOUT"<<endl;                                                     //Cierro el proceso de compra en el checkout
    cout<<"-----------------------------------------"<<endl;
    cout<<"Espero haya disfrutado su paso por nuestra pagina web Sr(a) "<<nombrecliente<< ", su total a pagar es de: $"<<carrito.calcTotal()<<endl;
    cout<<"Deposite el total de sus artículos a nuestra cuenta bancaria HSBC con terminación **5819 y en máximo 2 días hábiles recibirá sus artículos, excelente tarde :)))"<<endl;

    return 0;
}


