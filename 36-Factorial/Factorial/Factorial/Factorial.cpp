#include <iostream>
using namespace std;

// Escriba un programa que calcule el valor de 1*2*3*...*n (factorial de un número)

int main() {
	int n, fact = 1;
	cout << "Ingrese un numero: ";
	cin >> n;
	for (int i = 1; i <= n; i++){
		fact = fact * i;}
	cout << "\nEl factorial del numero ingresado es: " << fact << endl;
	return 0;
}