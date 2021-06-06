all:
	g++ serial.cpp -lstdc++fs -lstdc++ -c -o obj/serial.o
	g++ getdata.cpp -lstdc++fs -lstdc++ -c -o obj/getdata.o
	gcc -o bin/SymbolSearch obj/serial.o obj/getdata.o -lstdc++ -lstdc++fs 
run:
	cc testobj.c -lstdc++fs -lstdc++ -o obj/testobj.o
vdir:
	mkdir bin