CC=gcc

all: GOTOShower RecShower
	
GOTOShower: Mostrar_palabras-goto.c
	$(CC) -o GOTOShower Mostrar_palabras-goto.c

RecShower: Mostrar_palabras-rec.c
	$(CC) -o RecShower Mostrar_palabras-rec.c