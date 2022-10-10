#include <iostream>
#include <string>

using namespace std; 
// si la incluimos acá, en lugar de escribir 'std::cout' para printear, sólo escribimos 'cout'
// no se recomienda usar el namespace 'std' en su totalidad porque incluye muchas funciones que no usaremos (temas de optimización)

// función principal 'main'
int main(){

    // COUT (print)
    cout << "Hello World!" << endl;
    cout << "Bienvenidos al Curso Completo de C++!" << endl;

    // STRING (cadenas)
    string saludo = "Bienvenidos"; 
    cout << saludo << endl;

    // GETLINE (para strings) / Estructura -> getline(cin, variable)
    // #include <string> porque 'getline' es un método de 'string'
    string ciudad;
    cout << "Ingrese provincia y pais: " << endl;
    getline(cin, ciudad); // usamos 'getline' para leer todo el texto, 'cin' para el input y aclaramos en qué variable se debe guardar
    cout << ciudad << endl;
    // 'cin' guarda sólo una palabra

    // INT (enteros)  
    int edad = 4; 
    int edad_2 = 9;
    int edad_3 = 31;
        
    cout << edad << ' ' << edad_2 << ' ' << edad_3 << endl;

    // DOUBLE (decimales)   
    double pi = 3.14;
    cout << pi << endl;

     // CHAR (sólo un caracter - letra, n°, símbolo)
    char letra = 'a';
    cout << letra << endl;
    // si pongo más de un caracter sólo imprimirá el último ('abc' -> 'c')
    // aunque el 'char' sea un n° no se pueden hacer operaciones como un 'int'

    // BOOL (true = 1 / false = 0)
    bool primario = true; // puedo declarar 'bool primario = 1' y está bien también
    bool secundario = false; // puedo declarar 'bool secundario = 0'
    cout << primario << endl; // imprime un 1, que equivale a un 'true'

    // INPUT - OUTPUT
    string name; // definimos el string
    cout << "Ingrese su nombre: "; // pedimos un dato al usuario
    cin >> name; // almacenamos ese dato en la variable 'name'
    cout << "Su nombre es: " + name << endl; // lo mostramos por concatenación













}

