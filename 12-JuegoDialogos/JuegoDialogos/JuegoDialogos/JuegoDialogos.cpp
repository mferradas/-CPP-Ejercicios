#include <iostream>
using namespace std;

int main()
{
    cout << "\nRecuerdas por que estas aqui?\n";
    cout << "\n1. Que es esto?\n";  
    cout << "\n2. No quiero recordar...\n"; 
    cout<< "\n3. Quien eres? Estoy muerto?\n";
    int a;
    cin >> a;
    
    while (a != 1 and a != 2 and a != 3) {
        cout << "Elige del 1 al 3..." << endl;
        cin >> a;
    }

    if (a == 1) {
        cout << "Contesta la pregunta..." << endl;
    }

}

