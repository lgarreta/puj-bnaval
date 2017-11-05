#ifndef __NAVE_H__
#define __NAVE_H__

#include "coordenada.h"
#include "lista.h"
#include "listacoordenadas.h"
#include "nave.h"
#include <stdlib.h>

// Representa la clase general de nave maritima (barco, submarino, o portaviones)
class Nave {
	protected:
		ListaCoordenadas lstCoordenadas; // Lista donde guarda las coordenadas de la nave
		string tipo; // Tres tipos: "barco", "submarino", o "portaaviones"
		int direccion; // Direccion de la nave dentro del tablero. 0:horizontal, 1:vertical
		int longitud;  // Tamanho: 2: barco, 3: submarino, 4: portaaviones
		char simbolo;  // Simbolo que aparece en el tablero, b: barco, s: submarino, p: portaaviones

	public:
		// Operador << para imprimir con cout un objeto tipo nave
		friend ostream& operator<<(ostream& os, const Nave& nv);

		// Asigna nuevas coordenadas a la nave
		void setCoordenadas (ListaCoordenadas lc);

		// Retorna la lista de coordenadas de la nave
		ListaCoordenadas getCoordenadas ();

		// Genera una lista de coordenadas de acuerdo a la posicion "pos" de entrada
		// Estas coordenadas tienen en cuenta la direccion y el tamanho de la nave
		ListaCoordenadas generarCoordenadas (Coordenada pos);

		// Retorna el simbolo asociado al tipo de nave ('b', 's', o 'p')
		char getSimbolo (); 
};

#endif

