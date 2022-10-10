#include<iostream>
using namespace std;

/*
Realice un programa que lea de la entrada estándar números
hasta que se introduzca un cero.
En ese momento el programa debe terminar y 
mostrar en la salida estándar
el número de valores mayores que cero leídos.
*/

int main() {
	int numero;
	int contador = 0;
	do {	
		cout << "Ingrese un numero: " << endl;
		cin >> numero;
		if(numero>0){
		contador++;
		}
	} while (numero != 0);
	cout << "\nCantidad de valores mayores a cero: " << contador << endl;	
	return 0;
}