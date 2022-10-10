// Escriba un programa que calcule el valor de: 1+3+5+...+2n-1

#include <iostream>
using namespace std;

int main()
{
	int n, n2, suma = 0;
	cout << "Ingrese un numero: ";
	cin >> n;
	n2 = (2 * n) - 1;

	for(int i = 1; i <= n2; i = i + 2){
		
		suma = suma + i;

	}
	
	cout << "Suma total: " << suma;

	return 0;

}