#include <iostream>
using namespace std;

// C++ razona que a < z:
    // zapatilla > cielo
    // arboleda < perro

int main()
{
    // creamos dos variables para comparar
    string a; // anabella
    string b; // eduardo

    cin >> a >> b; // pedimos ambos ingresos

    // si a es mayor:
    if (a > b) {        
        cout << a << " > " << b; 
    }
    // si b es mayor:
    else if (a < b) {   
        cout << a << " < " << b;
    }
    // si ambas variables son iguales:
    else {              
        cout << a << " = " << b; 
    }

    cout << endl; // agrega un 'endline' sin importar el caso








}

