#include <iostream>
#include <time.h>

using namespace std;

int main () {
	
	int valor_ingresado, numeroAleatorio;
	
	srand(time(NULL)); // Iniciar la semilla para generar el numero aleatorio.
	numeroAleatorio = rand() % 100 + 1; // Generación de un numero aleatorio entre 1 y 100.
	
	cout << "En este juego intentaras adivinar un numero entre 1 y 100. (Escribe -1 para salir del programa.) " << "\n"; 
	
	do {
		
		cout << "Por favor captura un numero : ";
		
		if	(! (cin >> valor_ingresado) ) {	
			cout << "Error, se ha ingresado un dato no numerico ..." << endl;
			cin.clear();
			cin.ignore(1000,'\n');
		} 
		else if (valor_ingresado != -1) {
						
			if (valor_ingresado < numeroAleatorio) {
				cout << "El numero del sistema es mayor" << endl;
			}
			else if (valor_ingresado > numeroAleatorio) {
				cout << "El numero del sistema es menor" << endl;
			}
			else if (valor_ingresado = numeroAleatorio) {
				cout << "Adivinaste!" << endl;
				break;
			}
		}
	}
	while (valor_ingresado != -1 );
		cout << "Programa terminado." << endl;
	
	return 0;
	
}
