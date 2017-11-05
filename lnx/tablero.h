#ifndef __TABLERO_H__		
#define __TABLERO_H__		

#include "coordenada.h"
#include "lista.h"
#include "nave.h"

// Representa el tablero donde se pintan los barcos y los disparos
class Tablero {
protected:
	int nFilas,nColumnas;   // Variables para las dimensiones de la matrix nFilas: filas, nColumnas: columnas
	char matrix [10][10]; // Matrix donde se ubican los barcos
	int numeroCeldasNaves; // Numero de celdas ocupadas por las naves

public:
	// inicializa los atributos. Las celdas de la matrix se inician con el caracter '-'
	Tablero ();

	// Retorn el numero de filas
	int getFilas (); 

	// Retorn el numero de columnas
	int getColumnas (); 

	// Imprime la matriz en el tablero
	void mostrarse ();

	// Marca un hit ('x') en la matrix en la coordenada "c"
	void marcarHit (Coordenada c);

	// Retorna true si la celda de la coordenada "c" esta marcada con 
	// algun simbolo de una nave, decir si existe nave en esa coordenada.
	bool estaCeldaMarcada (Coordenada c);

	// Asigna los simbolos de la nave "nv" a la matrix del tablero
	// Para esto se obtienen las coordenadas de la nave y en cada
	// una de ellas en la matrix se asigna el simbolo de la nave.
	void pintarNaveEnTablero (Nave &nv);

	// Retorna true si las posiciones de la matrix que corresponden a las 
	// coordenadas de la lista lc están libre
	bool celdasEstanLibres (ListaCoordenadas lc);

	// Retorna true si todas las celdas de las naves estan marcadas en el 
	// tablero con hit (caracter 'x')
	bool estanTodosMarcados ();
};
			
#endif
