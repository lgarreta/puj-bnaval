#ifndef __MITABLERO_H__		
#define __MITABLERO_H__		

#include "tablero.h"

// Representa el tablero donde se pintan los barcos y los disparos
class MiTablero:public Tablero {
public:
	// Retorn el numero de filas
	int getFilas (); 

	// Retorn el numero de columnas
	int getColumnas (); 

};
			
#endif
