#include <iostream>
using namespace std;

// Escriba un programa que calcule el valor de: 1 + 2 + 3 + ... + n

int main() {
	
	int n, total = 0, ciclo = 0;
	cout << "Ingrese un numero: "; cin >> n;
	
	for (int i = 1; i <= n; i++) 
	{
		ciclo++;		
		total = total + ciclo;
	}

	cout << endl;
	cout << total << endl;
	return 0;
}

