#include <iostream>
using namespace std;
int main (){
    double A;
    double B;
    double C;
    cout<<"Ingrese los valores"<<endl;
    cout<<"Ingresa el valor A: ";
    cin>>A;
    cout<<"Ingresa el valor B:";
    cin>>B;
    cout<<"Ingresa el valor C: ";
    cin>>C;
    
        if (A > 0 && B > 0 && C == 0) {
        if (A == B) {
            cout << "La figura es un cuadrado";
        } else {
            cout << "La figura es un rectangulo";
        }
    }
    else if (A > 0 && B == 0 && C == 0) {
        cout << "La figura es un circulo";
    }
    else if (A > 0 && B > 0 && C > 0 &&
             A+B > C && A+C > B && B+C > A) {

        if (A == B && A == C) {
            cout << "La figura es un triangulo equilatero";
        }
        else if (A == B || A == C || B == C) {
            cout << "La figura es un triangulo isosceles";
        }
        else {
            cout << "La figura es un triangulo escaleno";
        }
    }
    else {
        cout << "Los valores no indican figura";
    }

    return 0;
}