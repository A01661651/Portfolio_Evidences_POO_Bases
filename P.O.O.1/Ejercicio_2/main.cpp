#include <iostream>
using namespace std;

int main(){


    int num;
    cout<<"Ingresa un número:";
    cin>>num; 
    while(num%2==0){
        cout<<"Ingresa un número:";
        cin>>num;
    }
    return 0;
}