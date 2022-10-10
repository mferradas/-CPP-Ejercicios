#include <iostream>
#include <stdlib.h> // incluye el 'system(pause)'
using namespace std;

int main()
{
    
    int i = 10;
    // en el 'do while' se ejecuta la condición y luego se verfica el 'while'
    do {
        cout << i << endl;
        i++;
    } while (i <= 5);

    system("pause"); //funciona igual que el 'getch()'

    return 0;
}

