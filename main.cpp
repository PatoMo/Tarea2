/* Universidad de La Frontera
* Departamento de Ingeniería Eléctrica
*
* IIE-344 ESTRUCTURA DE DATOS Y ALGORITMOS
*
* Tarea 2
*
* Autores:
*
* Mauricio Arismendi Aedo - m.arismendi02@ufromail.cl
* Patricio Morales Curihuinca - p.morales13@ufromail.cl
*
* Fecha: 21/1/2021
*
*Programa que utiliza un TDA lista
*   para mantener la información relevante sobre determinados medicamentos proporcionados a
*   pacientes, hecho para la tarea 2 de la asignatura IIE-344 Estructura de Datos y Algoritmos.
*/
#include <stdio.h>
#include <string.h> //libreria para comparar palabras
#include <cstdlib> //libreria de funciones de memoria en c
#include <iostream> //libreria de in-output
#include <cstdio>//guardar el archivo en txt
#include <ctime>  //PARA LA FECHA ACTUAL
#include <funciones.h> //libreria nuestra
#include <Structpacientes.h>
using namespace std;


int main(){
  FILE *archivo;
  archivo = fopen("pacientes.txt","a" );//abrimos con "a" para agregar información y no borrarla
  char intro[]="Pacientes hospital H";
  fprintf(archivo,intro);
    time_t hora = time(0);
    char* fecha = ctime(&hora);


do {
  paciente();

  medicamentos();

  inserta(archivo,primero,Lista); //funcion de tipo lista que organizara los datos de fprintf en una lista
    }
} while(opcion!=1234);
             printf("Los datos fueron almacenados correctamente \n")   ;



return 0;
}



