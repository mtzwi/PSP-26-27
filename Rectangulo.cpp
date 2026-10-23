#include <iostream>
using namespace std; 
int main (){
    double altura=0;
    double base=0;
    cout<<"Ingrese los datos correspondientes para el calculo del área de un rectangulo"<<endl;;
    cout<<"Igresa la base del rectangulo: ";
    cin>>base;
    cout<<"Ingresa la altura del rectangulo: ";
    cin>>altura;
    double area=altura * base;
    if(altura>0 && base>0 && altura!=base){
    cout<<"El area del rectangulo es: "<<area<<endl;
    }else if(altura == base){
        cout<<"Es un cuadrado y el area es: "<<area<<endl;
    }else{
        cout<<"Los valores de entrada deben ser mayores que 0";
    }
    return 0;
}