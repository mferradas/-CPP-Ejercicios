#include <iostream>
using namespace std;

/* En una clase de 5 alumnos se han realizado 3 exámenes y se requiere determinar el número de:

	a) alumnos que aprobaron todos los exámenes
	b) alumnos que aprobaron al menos un examen
	c) alumnos que aprobaron únicamente el último examen

Realice un programa que permita la lectura de los datos y el cálculo de las estadísticas.
*/

int main() {

	float examen1, examen2, examen3;
	int aprobadosTodos = 0, aprobadosUno = 0, aprobadosUltimo = 0;

	for (int i = 1; i <= 5; i++)
	{
		cout << i << ". Digite la nota del primer examen: " << examen1 << endl;
		cout << i << ". Digite la nota del segundo examen: " << examen2 << endl;
		cout << i << ". Digite la nota del tercer examen: " << examen3 << endl;

		if ((examen1 >= 7) && (examen2 >= 7) && (examen3 >= 7)){
			aprobadosTodos++;
		}
		if ((examen1 >= 7) || (examen2 >= 7) || (examen3 >= 7)){
			aprobadosUno++;
		}
		if ((examen1 < 7) && (examen2 < 7) && (examen3 >= 7)){
			aprobadosUltimo;
		}
	}
	return 0;
}