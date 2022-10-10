#include <iostream>
using namespace std;

// Funciones y Procedimientos
// Parámetros: paso por referencia (&)

//Swap
//Write a procedure
//void swap2(int& a, int& b);
//that swaps the value of its parameters.

void swap2(int& a, int& b) {
	// a = b; -> a vale b
	// b = a; -> b vale b
	// para resolver este problema, creamos una variable 'c':
	int c = b; // c vale b
	b = a; // b vale a
	a = c; // a vale (b)

}

int main() {

	int x = 2;
	int y = 5;

	swap2(x, y); // intercambiar x e y

	cout << x << " " << y << endl;
	// PROBLEMA RESUELTO

}
