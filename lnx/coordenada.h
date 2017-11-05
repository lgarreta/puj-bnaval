#ifndef __COORDENADA_H__		
#define __COORDENADA_H__		

#include <iostream>
using namespace std;

// Representa una coordenada dada por una fila (y) y una columna (x)
class Coordenada {
	public:
		int x; // Columna publica para tener acceso directo
		int y; // Fila publica para tener acceso directo

		// Constructor con la columna "x" y la fila "y"
		Coordenada (int x, int y) ;

		// Sobrecarga del operador << para imprimir la coordenada directamente
		friend ostream& operator<<(ostream& os, const Coordenada& c)  ;

		// Sobrecarga del operador == para comparar directamente dos coordendas 
		bool operator==(const Coordenada& c);
};
#endif
