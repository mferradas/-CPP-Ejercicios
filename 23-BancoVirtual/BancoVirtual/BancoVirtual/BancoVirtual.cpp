#include<iostream>
using namespace std;
/*
1000k iniciales
1-ingresar dinero en cuenta
2-retirar dinero de la cuenta
3-salir
*/
int main() {

    int saldo = 1000, opc;
    float resultado = 0, suma_saldo, resta_saldo;

    cout << "\nBienvenido a su Cajero Virtual." << endl;
    cout << "\nSu saldo es de $" << saldo << "." << endl;
    cout << "\n1. Ingresar dinero en cuenta" << endl;
    cout << "2. Retirar dinero de la cuenta" << endl;
    cout << "3. Salir" << endl;

    cout << "\nSeleccione una opcion: ";
    cin >> opc;

    switch (opc) {

    case 1:
        cout << "\nDigite la cantidad de dinero que quiere ingresar: ";
        cin >> suma_saldo;
        resultado = saldo + suma_saldo;
        cout << "\nSu nuevo saldo en cuenta es de $" << resultado << "." << endl;
        break;

    case 2:
        cout << "\nDigite la cantidad de dinero que quiere retirar: ";
        cin >> resta_saldo;
        while (resta_saldo > saldo) {
            cout << "\nUsted no cuenta con esa cantidad de dinero. " << endl;
            cout << "\nSu saldo es de $" << saldo << ". Digite nuevamente la suma a retirar: ";
            cin >> resta_saldo;
        }
        resultado = saldo - resta_saldo;
        cout << "\nSu nuevo saldo en cuenta es $" << resultado << "." << endl;
        break;

    case 3:
        break;
    }
    cout << "\nFin del programa. " << endl;
    return 0;
}