#include <iostream>
using namespace std;

// función: retorna un valor
// procedimiento: no retorna un valor -> void nombre (parametros) {instrucciones}
// facilitar el entendimiento y simplificar el programa

// creo un 'void' (procedimiento) porque NO DEVUELVE NADA
void saludo() {
    cout << endl;
    cout << "Saludo de Bienvenida desde la funcion 'saludo'." << endl;
}

void edad() {
    cout << "Introduzca su edad: " << endl;
    int a;
    cin >> a;
    cout << "Su edad es " << a << endl;
}

// nunca podré hacer un 'cout' de un 'void', porque no hay return (no retorna nada)

//defino los tipos de argumentos en la creación de la función
int calcularMayor(int a, int b) {
    if (a > b) {
        cout << a << " es mayor que " << b << endl;
    }
    else if (a == b) {
        cout << "Ambos numeros son iguales" << endl;
    }
    else {
        cout << b << " es mayor que " << a << endl;
    }
    // sin colocar el 'return' da error porque se espera un retorno
    return 0;
}

// otra forma de escribir lo anterior
int calcularMayor2(int a, int b) {
    if (a > b) return a;
    else return b;
}

int main()
{
    // llamamos a las tres funciones dentro de la 'main'
    saludo();
    edad();
    calcularMayor(9,1);
    calcularMayor(7,7);
    calcularMayor(3,5);

    calcularMayor2(9, 2);

    return 0;

}

