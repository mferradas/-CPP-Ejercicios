#include<iostream>
using namespace std;

/* Realice un programa que calcule la descomposición en factores primos de un número entero. 

Por ejemplo: 20 = 2*2*5.

*/

int main() {

	int numero;

	cout << "Ingrese un numero: " << endl;
	cin >> numero;

	for (int i = 2; numero > 1; i++) {
		while (numero % i == 0) {
			cout << i << " ";
			numero /= i;
		}
	}
	
	return 0;
}












