#include <iostream>
using namespace std;
/*
Realice un programa que calcule y muestre en la salida estándar
la suma de los cuadrados de 
los 10 primeros enteros
mayores que cero
*/
int main() {
	int n, cuadrado=0, acumulacion=0, contador=1;
	do {		
		cout << "Ingrese un numero: ";		
		cin >> n;		
		if(n>0){		
			cuadrado = n * n;		
			acumulacion = acumulacion + cuadrado;		
			contador++;
		}	
	} while (n != 0 && contador < 11);
	cout << "\nSuma de los cuadrados de numeros ingresados mayores a cero: " << acumulacion << endl;
	return 0;
}