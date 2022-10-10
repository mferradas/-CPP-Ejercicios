#include <iostream>
using namespace std;

/* Escriba un programa que lea de la entrada estándar
* un caracter e indique en la salida estándar
* si el caracter es una vocal minúscula o no
*/

int main() {

	char letra;
	cout << "Digite un caracter: " << endl;
	cin >> letra;

	switch (letra) {
	// comillas simples para comparar los caracteres (strings)
	case 'a': 
	case 'e':
	case 'i':
	case 'o':
	case 'u': cout << "Es una vocal minuscula"; break; // la frase se imprime para las 5 vocales porque no puse 'break' en las anteriores
	default: cout << "No es una vocal minuscula"; break;
	}

	return 0;
}