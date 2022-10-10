#include <iostream>
using namespace std;

// Realizar un programa que devuelva la serie de Fibonacci:

int main() {
	
	int n, a0 = 0, a1 = 1, a2 = 1;

	cout << "Ingrese un numero: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {

		a2 = a0 + a1;
		cout << a2 << " " << endl;
		a0 = a1;
		a1 = a2;
	}

	return 0;
}