#include <iostream>
using namespace std;

// El programa debe devolver el resultado de 1 - 2 + 3 - 4 + 5 - 6...n

int main() {

	int n, pares = 0, impares = 0, resultado = 0;

	cout << "Ingrese un numero: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {

		if (i % 2 != 0) {
			impares = impares + i;
		}
		else {
			pares = pares + i;
		}
	}

	pares = pares * (-1);
	cout << pares + impares;

	return 0;
}