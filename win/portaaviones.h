#ifndef __PORTAAVIONES_H__
#define __PORTAAVIONES_H__
#include "nave.h"

// Sobreescribe el constructor de nave asignando el tipo "portaaviones",
// la longitud=4, el simbolo='p' y adicionando a la lista  de coordenadas 
// 4 coordenadas negativas (-1,-1)
class Portaaviones : public Nave {
	public:
		Portaaviones () ;
};

		
#endif
