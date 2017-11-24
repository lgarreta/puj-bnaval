#include "coordenada.h"
#include "lista.h"
#include "nave.h"
#include "tablero.h"

// Representa el tablero donde se pintan los barcos y los disparos

// inicializa los atributos. Las celdas de la matrix se inician con el caracter '.'
Tablero::Tablero () {
		numeroCeldasNaves = 0;
		nFilas = nColumnas = 10;
		for (int i=0; i<nFilas; i++)
			for (int j=0; j<nFilas; j++)
				matrix [i][j] = '.';
}

// Retorn el numero de filas
int Tablero::getFilas () { 
		return nFilas;
}

// Retorn el numero de columnas
int Tablero::getColumnas () { 
		return nColumnas;
}

// Imprime la matriz en el tablero
void Tablero::mostrarse () {
		cout << "\t";
		for (int i=0; i<nColumnas; i++) 
			cout << i << "\t";
		cout << endl;

		for (int i=0; i<nFilas; i++) {
			cout << i << "\t";
			for (int j=0; j<nColumnas; j++)
				cout << matrix [i][j] << "\t";
			cout << endl;
		}
}

// Marca un hit ('x') en la matrix en la coordenada "c"
void Tablero::marcarHit (Coordenada c) {
		matrix [c.y][c.x] = 'x';
		numeroCeldasNaves--;
}

// Retorna true si la celca de la coordenada "c" esta marcada con 
// algun simbolo de una nave, decir si existe nave en esa coordenada.
bool Tablero::estaCeldaMarcada (Coordenada c) {
		return matrix [c.y][c.x] != '.';
}

// Asigna los simbolos de la nave "nv" a la matrix del tablero
// Para esto se obtienen las coordenadas de la nave y en cada
// una de ellas en la matrix se asigna el simbolo de la nave.
void Tablero::pintarNaveEnTablero (Nave &nv){
		ListaCoordenadas lc = nv.getCoordenadas ();
		for (int i=0; i < lc.longitud (); i++) {
			Coordenada c = lc.getElemento (i);
			matrix [c.y][c.x] = nv.getSimbolo ();
			numeroCeldasNaves++;
		}
}

// Retorna true si las posiciones de la matrix que corresponden a las 
// coordenadas de la lista lc están libre
bool Tablero::celdasEstanLibres (ListaCoordenadas lc) {
		for (int i=0; i < lc.longitud(); i++){
			Coordenada c = lc.getElemento(i);
			if (matrix [c.y][c.x] != '.') return false;
		}
		return true;
}

// Retorna true si todas las celdas de las naves estan marcadas en el 
// tablero con hit (caracter 'x')
bool Tablero::estanTodosMarcados (){	
		cout << endl << numeroCeldasNaves << endl;
		return numeroCeldasNaves==0;
}
