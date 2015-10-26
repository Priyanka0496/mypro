try: main.o matrix.o trigo.o conv.o
	cc main.o matrix.o trigo.o conv.o -o try
main.o: main.c xyz.h
	cc -c main.c
matrix.o: matrix.c xyz.h
	cc -c matrix.c
trigo.o: trigo.c xyz.h
	cc -c trigo.c
conv.o: conv.c xyz.h
	cc -c conv.c
