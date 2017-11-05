#ifndef __BARCO_H__
#define __BARCO_H__
#include "nave.h"

// Sobreescribe el constructor de nave asignando el tipo "barco",
// la longitud=2, el simbolo='b' y adicionando a la lista  de coordenadas 
// 2 coordenadas negativas (-1,-1)
class Barco : public Nave {
	public:
		Barco () ;
};

		
#endif
