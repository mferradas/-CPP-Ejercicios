#include<iostream>
using namespace std;
int main() {
	int edad;
	cout << "Ingrese edad: " << endl;
	cin >> edad;
	if (edad > 17 && edad < 26) {
		cout << "Edad en el rango de 18-25." << endl;
	}
	else {
		cout << "Edad fuera del rango de 18-25." << endl;
	}
	return 0;
}