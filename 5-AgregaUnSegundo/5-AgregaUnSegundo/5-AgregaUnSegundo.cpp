#include <iostream>
using namespace std;

// Escriba un programa que agregue un segundo a la hora del reloj, dadas sus horas, minutos y segundos.

// La entrada consta de tres números naturales h, m y s que representan una hora de reloj, es decir, h < 24, m < 60 y s < 60.

// Imprima la nueva hora del reloj definida por h, m y s más un segundo en el formato "HH: MM: SS".

// h < 24 m < 60 s 60

int main()
{
    int h, m, s;

    // HORA
    cout << "Hora: " << endl;
    cin >> h;

    while (h < 0 || h > 23) {
        cout << "Ingrese una hora valida (00 a 23): " << endl;
        cin >> h;
    }

    // MINUTOS
    cout << "Minutos: " << endl;
    cin >> m;

    while (m < 0 || m > 59) {
        cout << "Reintente nuevamente (de 00 a 59): " << endl;
        cin >> m;
    }
    
    // SEGUNDOS
    cout << "Segundos: " << endl;
    cin >> s;

    while (s < 0 || s > 59) {
        cout << "Reintente nuevamente (de 00 a 59): " << endl;
        cin >> s;
    }

    ++s;
    if (s > 59) {
            ++m;
            s = 00;
    }

    if (m > 59) {
            ++h;
            m = 00;      
    }
        
    if (h > 23) {            
            h = 00;
    }

    if (h < 10) cout << "0";
    cout << h << ":";

    if (m < 10) cout << "0";
    cout << m << ":";

    if (s < 10) cout << "0";
    cout << s << endl;

    

}


