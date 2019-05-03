#include<iostream>
using namespace std;

void Ejercicio1(int a, int b);

int main(){
    char respuesta = 'S';
    while (respuesta == 'S' || respuesta == 's'){
    int opcion = 0;
    while(opcion <= 0 || opcion > 4){
        cout << "Menu" <<endl
        << "1)Ejercicio 1" <<endl
        << "2)Ejercicio 2" <<endl
        << "3)Ejercicio 3" <<endl
        << "4)Salir" <<endl
        << "Ingrese su opcion: ";
        cin >> opcion;
    }
    switch(opcion){
        case 1:
            {
                int a = 0;
                int b = 0;
                while (a <= 0){
                    cout << "Ingrese a: ";
                    cin >> a;
                }
                while (b<= 0 || b > a){
                    cout << "Ingrese b: ";
                    cin >> b;
                }
                Ejercicio1(a,b);
                break;
            }
    }
    cout << "¿Desea volver a hacerlo[s/n]?: ";
    cin >>  respuesta;
    }
    return 0;
}

void Ejercicio1(int a, int b){
    if ((a % b) == 0){
        cout << "El maximo comun divisor es: "<< b <<endl; 
    } else {
        int temp = b;
        b =(a % b);
        a = temp;
        Ejercicio1(a,b);
    }
}
