#include <iostream>
using namespace std;

int main() {

	int x, y, elevacion = 1;

	cout << "Ingrese base: " << endl; cin >> x;
	cout << "Ingrese exponente: " << endl; cin >> y;

	for (int i = 1; i <= y; i++) {
		
		//suponiendo que x=3:
		//en la primera vuelta, elevación vale 1, y almacena el valor de 1 * 3
		//en la segunda vuelta, elevación vale 3 y almacena el valor de  3 * 3 (ya no vale 1)
		elevacion = elevacion * x;
	}

	cout << elevacion;

	return 0;
}