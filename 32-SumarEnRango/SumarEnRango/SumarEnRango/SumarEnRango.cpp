#include<iostream>
using namespace std;

/* Escriba un programa que lea valores enteros
hasta que se introduzca un valor en el rango [20-30]
o se introduzca el valor 0. El programa debe
entregar la suma de los valores mayores a 0 introducidos */

// leer valores hasta que se ingrese un valor entre 20-30 o 0
// devolver suma de mayores a 0

/*
* - pedir numeros
* - si es cero o está entre 20-30 terminar
* - sumar numeros mayores a 0
*/

int main() {

	int n, suma = 0;
	bool comprobar = false;
	
	do {
		cout << "Introduzca un numero: "; //pedir numero
		cin >> n; //guardar numero
		
		while (n > 0){
		suma = suma + n; //sumar numeros
		}

		if (n > 20 && n < 31){ //if (n != 0 || n > 20 && n < 31){
			bool comprobar = true;
		}
	
	} while (comprobar==true);		

	cout << "\nSuma de numeros ingresados: " << suma << endl;
	return 0;
}


//pensar en cambio de enfoque
//puede ser un while

/*
int main() {

	int n, suma = 0;

	cout << "Ingrese un numero: ";
	cin >> n;

	if (n == 0 || n > 19 && n < 31) {
		cout << "Fin del programa. " << endl;		
	}
	else {

	}	

	return 0;
}*/