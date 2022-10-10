#include<iostream>
using namespace std;

int main() {

    int opc, numero, resultado, parImpar;

    cout << "\n1. Cubo de un numero" << endl;
    cout << "2. Numero par - impar" << endl;
    cout << "3. Salir" << endl;

    cout << "\nElija una opcion: ";
    cin >> opc;

    switch (opc) {
    case 1:
        cout << "\nIngrese un numero para elevar al cubo: ";
        cin >> numero;
        resultado = numero * numero * numero;
        cout << "\nEl cubo de " << numero << " es " << resultado << "." << endl;
        break;

    case 2:
        cout << "\nIngrese un numero para determinar si es par o impar: ";
        cin >> numero;
        if (numero % 2 == 0) {
            cout << "\nEl numero ingresado es par. " << endl;
        }
        else {
            cout << "\nEl numero ingresado es impar. " << endl;
        }
        break;

    case 3:
        cout << endl;
        cout << "\Fin del programa. " << endl;
        break;
    }

    return 0;
}