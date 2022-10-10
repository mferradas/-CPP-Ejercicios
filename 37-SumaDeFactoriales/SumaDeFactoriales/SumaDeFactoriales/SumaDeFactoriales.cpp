#include <iostream>
using namespace std;

int main() {

	int n, fact = 1, suma = 0;
	cout << "Ingrese un numero: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		fact = fact * i;
		suma = suma + fact;
	}	

	cout << suma;

	return 0;
}

