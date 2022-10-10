#include <iostream>
using namespace std;

int main()
{

	// en el IF la condición va entre paréntesis
	// usamos ELSE IF cuando son varias opciones

	// IF EN UNA LÍNEA
	int nota = 8;
	if (nota >= 5) cout << "Aprobado" << endl;
	else cout << "Desaprobado" << endl;

	// IF CON CORCHETES
	int nota_2;
	cin >> nota_2;

	if (nota_2 >= 5) {
		cout << "Aprobado" << endl;
	}
	else {
		cout << "Desaprobado" << endl;
	}




}

