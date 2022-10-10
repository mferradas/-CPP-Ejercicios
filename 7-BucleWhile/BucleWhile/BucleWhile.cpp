#include <iostream>
using namespace std;

// bucle 'while'
int main()
{
   	// estructura del for (para ver diferencias):
    // for (int i = 0; i < condicion; ++i)

    // en cambio, el while...
    int numero_veces;
    cin >> numero_veces;    
    int a, b;     
    cin >> a >> b;

    // mientras número_veces > 0 entrar al ciclo:
    while (numero_veces > 0) {
        cout << a * b << endl; // mostramos la * entre 'a' y 'b'
        --numero_veces; // -1 a numero_veces para que el loop no sea infinito
        // --numero_veces es igual que numero_veces = numero_veces -1
    }




}

