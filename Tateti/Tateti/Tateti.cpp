#include<stdio.h>
#include <stdlib.h>

struct tateti {
    // const no cambia de valor
    static const char ancho = 3;
    static const char alto = 3;

    char tablero[ancho * alto] = {}; // llaves vacías = todos ceros
    char jugador_actual = 0;
    int cantCeldasJugadas = 0;
    };

// pongo el parámetro con * porque paso una referencia al tablero original
int mostrarTablero(const char * tablero, char ancho, char alto) {

    printf("\n");
    // revisa alto (y) y ancho (x)
    for (char y = 0; y < alto; ++y) {
        for (char x = 0; x < ancho; ++x) {
            char cellvalue = tablero[y * ancho + x];
            switch (cellvalue) {                
            case 0: printf("-"); break;
            case 1: printf("X"); break;
            case 2: printf("O"); break;            
            }
        }
        printf("\n");
    }
    return 0;
}

int main() {
    
    tateti juego;
    bool running = true;
    while (running) {

        mostrarTablero(juego.tablero,juego.ancho,juego.alto);

        printf("\nSeleccione una celda: ");
        char n_celda = getc(stdin);
        n_celda = atoi(&n_celda) - 1;
        
        juego.tablero[n_celda] = (juego.jugador_actual % 2) + 1;
        ++juego.jugador_actual;
        ++juego.cantCeldasJugadas;
        n_celda = getc(stdin);

        if (juego.cantCeldasJugadas == 9) {
            mostrarTablero(juego.tablero, juego.ancho, juego.alto);
            printf("\nDesea seguir jugando? S/N: ");
            char response = getc(stdin);
            if (response == 'n') {
                running = false;
            }
            juego = {};
        }
    }    
}

