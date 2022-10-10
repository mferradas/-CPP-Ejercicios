#include <iostream>
using namespace std;

int main()
{
    // Imponemos la condición de decimales
    cout.setf(ios::fixed);
    // Imponemos la condición de 2 decimales
    cout.precision(2);

    string word;
    double a, b;

    while (cin >> word and word != "parar") { // mientras ingrese una palabra, y esa palabra no sea "parar"...
        cin >> a; // pedir 'a'
        if (word == "cambio") cout << a * -1; // si la palabra es "cambio" mostramos la inversa aditiva (* -1)
        else { // si la palabra no es "cambio"...
            cin >> b; // pedimos 'b'
            if (word == "suma") cout << a + b; // si la palabra es "suma", mostramos la suma
            if (word == "resta") cout << a - b; // si la palabra es "resta", mostramos la resta
        }
        cout << endl;
    }




}


