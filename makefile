exe:	ingredientes.o platos.o bodega.o main.o
	g++ ingredientes.o platos.o bodega.o main.o -o exe

main.o:	main.cpp bodega.h platos.h ingredientes.h
	g++ -c main.cpp

ingredientes.o:	ingredientes.h ingredientes.cpp
	g++ -c ingredientes.cpp

bodega.o:	bodega.h bodega.cpp platos.h ingredientes.h
	g++ -c bodega.cpp

platos.o:	platos.h platos.cpp ingredientes.h
	g++ -c platos.cpp
