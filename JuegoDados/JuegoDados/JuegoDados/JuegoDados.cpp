#include<stdio.h> //para función 'printf'
#include<stdlib.h> //función 'random'
#include<time.h> //librería para el tiempo

// Juego de Dados

int jugar() {

	int dado1_rand = rand();
	int dado1 = (dado1_rand % 6) + 1; // hago que el valor aleatorio no supere el 5 (de 0 a 5)

	int dado2_rand = rand();
	int dado2 = (dado2_rand % 6) + 1;

	printf("\nEl valor de DADO UNO es %i y el valor de DADO 2 es %i.\n", dado1, dado2);

	return 0;
}

int main() {

	// srand(1) -> siempre me va a dar los mismos números a partir del 1 (pirámide)
	srand(time(0)); // uso como n° random base la hora del sistema en segundos -> importé lib 'time.h' para esto

	bool running = true;

	while (running) {

		jugar();

		printf("\nDesea seguir jugando? S/N: ");

		char response = getc(stdin); 

		if (response == 'n') {
			running = false;
		}		
	}
	return 0;
}