all:
	g++ serial.cpp -lstdc++fs -lstdc++ -c -ldl -o obj/serial.o
	g++ getdata.cpp -lstdc++fs -lstdc++ -c -o obj/getdata.o
	gcc -o bin/SymbolSearch obj/serial.o obj/getdata.o -lstdc++ -ldl -lstdc++fs 
run:
	cc testobj.c -lstdc++fs -shared -fPIC -lstdc++ -o obj/testobj.o
vdir:
	mkdir bin