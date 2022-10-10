#include <iostream>
using namespace std;

// Escriba una programa que lea 3 números y determine cuál de ellos es el mayor;

int main() {

	int a, b, c;

	cout << "Ingrese A: " << endl;
	cin >> a;
	cout << "Ingrese B: " << endl;
	cin >> b;
	while (b == a) {
		cout << "El valor de B es igual al de A. Ingrese otro valor para B: " << endl;
		cin >> b;
	}
	cout << "Ingrese C: " << endl;
	cin >> c;
	while (c == a || c == b) {
		cout << "El valor de C se repite. Ingrese otro valor para C: " << endl;
		cin >> c;
	}

	if (a > b && a > c) {
		cout << "\nEl mayor valor es " << a;
	}
	else if (b > a && b > c) {
		cout << "\nEl mayor valor es " << b;
	}
	else if (c > a && c > b) {
		cout << "\nEl mayor valor es " << c;
	}

	cout << endl;

	return 0;
}