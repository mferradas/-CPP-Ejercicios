#include<iostream>
using namespace std;

/*
Realice un programa que solicite de la entrada estándar un entero 
del 1 al 10 y muestre en la salida estándar su tabla de multiplicar
*/

int main() {

	int n;
	cout << "Ingrese un numero: ";
	cin >> n;
	cout << endl;

	while (n < 0 || n>10) {
		cout << "Ingrese un numero entre 1 y 10:";
		cin >> n;		
	}

	for (int i = 1; i <= 10; i++) {

		cout << n << " x " << i << " = " << n * i << endl;

	}

	return 0;
}
