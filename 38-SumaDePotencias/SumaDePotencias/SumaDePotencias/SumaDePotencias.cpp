#include <iostream>
using namespace std;

// Escriba un programa que calcule el valor de 2^1+2^2+...2^n
// ans = ans*base | ans = 1

int main() {

	int base = 2, ans = 1, numero, suma = 0;

	cout << "Ingrese un exponente: ";
	cin >> numero;

	for (int i = 1; i <= numero; i++) {

		ans = ans * base;
		suma = suma + ans;

	}

	cout << suma;

	return 0;
}