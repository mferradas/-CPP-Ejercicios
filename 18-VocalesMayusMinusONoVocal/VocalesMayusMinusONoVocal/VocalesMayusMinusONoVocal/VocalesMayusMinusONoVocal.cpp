#include <iostream>
using namespace std;

/* Escriba un programa que lea de la entrada estándar un caracter
* e indique en la salida estándar si el carácter es una vocal minúscula, 
* es una vocal mayúscula o no es una vocal
*/

int main() {

	char letra;
	cout << "Digite un caracter: " << endl;
	cin >> letra;

	// switch -> condicional múltiple
	switch (letra) {

	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u': cout << "Es una vocal minuscula"; break;
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U': cout << "Es una vocal mayuscula"; break;
	default: cout << "No es una vocal"; break;
	}

	return 0;
}