#include<iostream>
using namespace std;
/* Escribe un programa que lea de la entrada estándar 3 números.
* Después debe leer un 4° número e indicar si coincide
* con alguno de los números anteriores.
*/
int main() {
	int a, b, c, d;
	cout << "Ingrese tres numeros: " << endl;
	cin >> a >> b >> c;	
	cout << "Ingrese un cuarto numero: " << endl;
	cin >> d;	
	if (d == a) {
		cout << "El ultimo numero ingresado coincide con el primero." << endl;
	}
	else if (d == b) {
		cout << "El ultimo numero ingresado coincide con el segundo." << endl;
	}
	else if (d==c){
		cout << "El ultimo numero ingresado coincide con el tercero." << endl;
	}
	else {
		cout << "El ultimo numero ingresado no coincide con ninguno de los anteriores." << endl;
	}
	return 0;
}