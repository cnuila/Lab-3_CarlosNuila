#include<iostream>
#include<sstream>
#include<string>
using namespace std;

void Ejercicio1(int a, int b);
int* calculadoraPrimos();
void Ejercicio2(int* arreglo, int numero);
void freeArray(int* array);

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
        case 2:
            {
                int* arrayPrimos = calculadoraPrimos();
                int numero = 0;
                while(numero <= 0){
                    cout << "Ingrese el numero: ";
                    cin >> numero;
                }
                Ejercicio2(arrayPrimos, numero);
                freeArray(arrayPrimos);
                arrayPrimos = NULL;
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

int* calculadoraPrimos(){
    int* temporal = new int[25];
    temporal[0]=2;
    temporal[1]=3;
    temporal[2]=5;
    temporal[3]=7;
    temporal[4]=11;
    temporal[5]=13;
    temporal[6]=17;
    temporal[7]=19;
    temporal[8]=23;
    temporal[9]=29;
    temporal[10]=31;
    temporal[11]=37;
    temporal[12]=41;
    temporal[13]=43;
    temporal[14]=47;
    temporal[15]=53;
    temporal[16]=59;
    temporal[17]=61;
    temporal[18]=67;
    temporal[19]=71;
    temporal[20]=73;
    temporal[21]=79;
    temporal[22]=83;
    temporal[23]=89;
    temporal[24]=97;
    return temporal;
}

void Ejercicio2(int* arrayPrimos, int numero){
    bool flag = false;
    int num = numero;
    int posicion = 0;
    int acum = 0;
    stringstream salida;
    //cout << "num = " << num <<endl;
    //cout << "arraypr = " << arrayPrimos[posicion] << endl;
    while(!flag){
        if ((num % arrayPrimos[posicion]) == 0){
            acum++;
            num = num / arrayPrimos[posicion];
        }else{
            if (acum != 0){
                salida << "(" << arrayPrimos[posicion] << "^" << acum << ")";
                if (num != 1) 
                    salida << "*";
            }
            acum = 0;
            posicion++;
        }
        //cout << "num = " <<num << endl;
        //cout << "acum = " <<acum << endl;
        if (num == 1)
            flag = true;
    }
    salida << "(" << arrayPrimos[posicion] << "^" << acum << ")";
    cout << salida.str() << endl;
}

void freeArray(int* array){
    if (array != NULL)
        delete[] array;
}

