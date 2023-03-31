#include <iostream>//jose octavio valdez miranda,    carnet:0909-21-8874
#include "conio.h"

using namespace std;

int main() {// se declaran las variables y los grupos (array).
    int salir, si, no;
    int num[100];
    int numero[10];
    int opc, n, suma, mayor = 0, cantidad, i;
    int numeros[] = {1, 2, 3, 4, 5, 6, 9, 7, 8, 12, 45};

    cout << "Bienvenido , elija una de las opciones disponibles" << endl; // se crea un menu para poder acceder a la diferentes operaciones
    cout << "***  Opcion 1 : Suma de enteros  ***" << endl;
    cout << "***  Opcion 2 : Encontrar numero mayor  *** " << endl;
    cout << "***  Opcion 3 : Invertir las pocisiones de los elementos *** " << endl;
    cout << "***  Opcion 4 : Mostrar en pantalla suma de numeros ***" << endl;
    cout << "**** Opcion 5 : Salir                               ***" << endl;

    cout << " Ingrese numero de opcion : " << endl;
    cin >> opc;

    switch (opc) { // se agrega un switch para la seleccion de los casos.
        case 1 :
            for (int i = 0; i <= 10; i++) {
                suma = suma + numeros[i];
            }
            cout << "la suma de los elementos del vector es : " << suma << endl;
            getch();
            break;


        case 2 :
            cout << "Escriba el limite del arreglo" << endl;
            cin >> n;

            for (int i = 0; i <= n; i++) {
                cout << "Escriba un numero" << endl;
                cin >> num[i];

                if (num[i] > mayor) {
                    mayor = num[i];
                }
            }
            cout << "el numero mayor del vector es: " << mayor << endl;
            break;

        case 3 :
            for (i = 0; i < 5; i++) {
                cout << "ingresa los numeros que desea invertir : " << endl;
                cin >> numero[i];
            }
            for (i = 5; i >= 0; i--) {
                cout << "***:" << numero[i] << endl;
            }
            break;


        case 4 :
            for (int i = 0; i <= 10; i++) {
                 suma = suma + numeros[i];
            }
            cout << "la suma de los elementos del vector es : " << suma << endl;
            break;

        case 5:
            if (salir = si) {
                cout << "desea salir :" << endl;
                cin>>salir;
                cout << "gracias por utilizar este programa"<<endl;

            }

            return 0;
    }
}
