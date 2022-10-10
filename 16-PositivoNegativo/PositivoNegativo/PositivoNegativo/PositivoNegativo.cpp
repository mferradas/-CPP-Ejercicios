#include <iostream>
using namespace std;
int main() {

	int n;
	cout << "Ingrese un numero: " << endl;
	cin >> n;

	while (n == 0) {		
		cout << "Ingrese un numero distinto de cero: " << endl;
		cin >> n;
	}

	if (n > 0) {
		cout << "El numero es positivo." << endl;
	}
	else {
		cout << "El numero es negativo." << endl;
	}

	return 0;
}
