#ifndef __SUBMARINO_H__
#define __SUBMARINO_H__
#include "nave.h"

// Sobreescribe el constructor de nave asignando el tipo "submarino",
// la longitud=3, el simbolo='s' y adicionando a la lista  de coordenadas 
// 3 coordenadas negativas (-1,-1)
class Submarino : public Nave {
	public:
		Submarino (); 
};

		
#endif
