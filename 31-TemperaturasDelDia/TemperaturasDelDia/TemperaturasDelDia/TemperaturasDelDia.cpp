#include <iostream>
#include <iomanip> // para decimales
using namespace std;
/*
Escriba un programa que tome cada 4 horas la temperatura exterior,
leyéndola durante un período de 24 horas. Es decir, debe leer 6 temperaturas.
*/
int main() {

	float temp, mayor = 0, menor = 999, prom = 0, total = 0;

	// cada 4 hs pide la temperatura
	for (int i = 0; i < 24; i += 4) {

		cout << "\nDigite la temperatura de la hora " << i << ": ";
		cin >> temp;
		prom += temp / 6;

		total = total + temp;

		//sacar la mayor temperatura
		if (temp > mayor) {
			mayor = temp;
		}

		if (temp < menor) {
			menor = temp;
		}
		
	}

	cout << "\nLa temperatura promedio es " << setprecision(3) << prom << endl;
	cout << "\nLa temperatura mas alta es " << mayor << endl;
	cout << "\nLa temperatura mas baja es " << menor << endl;

	return 0;
}