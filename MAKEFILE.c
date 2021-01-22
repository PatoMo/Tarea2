all:
    g++ -c Tarea.cpp
    g++ -c funciones.cpp
    g++ -o ejecutable main.o funciones.o

