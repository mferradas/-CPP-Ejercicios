#include <iostream>
#include <cstdlib> // número aleatorio
#include <ctime> // incluyo librería de tiempo para que actúe como punto de partida
using namespace std;

/* 
Realice un programa que solicite al usuario que piense un número entero entre el 1 y el 100. 

El programa debe generar un número aleatorio en ese mismo rango [1-100] e indicarle al usuario
si el número que digitó es menor o mayor al número aleatorio, hasta que lo adivine.

Por último, debe mostrar el número de intentos. 
*/

int main() {

	srand((unsigned)time(0));

	int numeroRandom, n, intentos = 1;
	numeroRandom = 1 + rand() % (100);

	cout << "\nDebe tratar de adivinar el numero entre [1-100]: "; cin >> n;

	while (n > 100 || n < 1) {
		cout << "\nDebe ingresar un valor entre [1-100]: ";
		cin >> n;
	}		

	while (n != numeroRandom) {

		intentos++;

		if (n > numeroRandom) {

			cout << "\nEl numero secreto es menor. Ingrese otro numero: ";			
			cin >> n;
		}
		else {
			cout << "\nEl numero secreto es mayor. Ingrese otro numero: ";			
			cin >> n;
		}
	}

	cout << "\nHas adivinado el numero secreto en " << intentos <<" intentos. Felicitaciones!!!" << endl;	

	return 0;
}