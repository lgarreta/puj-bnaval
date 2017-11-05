CC=g++
CFLAGS=-fmax-errors=5 -I.
DEPS = tablero.h nave.h barco.h submarino.h portaaviones.h coordenada.h lista.h tablero.h jugador.h 
OBJ =  tablero.o mainbn.o nave.o barco.o submarino.o portaaviones.o coordenada.o tablero.o jugador.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

mainbn.exe: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o *.gch *.exe  

