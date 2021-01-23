//Funciones o Prototipos
/*
* Nombre de la función: paciente.
* Tipo de función: int
* Parámetros: no tiene.
* Dato de retorno: datos almacenados en variantes como nombre,rut,edad,etc... ;
* Descripción de la función: La función paciente() es de recepción de datos, datos para reconocimiento de paciente y futura
localización del misma, ya que todo esto será acompañado con su receta de la función medicamentos.

* Nombre de la función: medicamentos()
* Tipo de función: int.
* Parámetros: No tiene.
* Dato de retorno: Guarda todo las variables en un .txt y además se inserta la información en una Lista.
* Descripción de la función: La función medicamentos() se encarga de solicitar el medicamento a suministrar,dosis y
calcular la concentración, luego se guarda en un .txt para luego pasar a la siguiente función inserta().

* Nombre de la función: inserta()
* Tipo de función: void.
* Parámetros: “x” de tipo char(aunque tipoDato puede variar).
* “p” de tipo int y lista de tipo Lista.
* Dato de retorno: Retorna el siguiente punto en nuestra lista;
* Descripción de la función: La función inserta() se encarga de tomar toda la información puesta en la receta,
e insertarlo en una lista de tipo Lista, ya que en el caso de querer descartar el .txt, se podría realizar una función
de búsqueda por rut,nombre u otra variable almacenada.
/*
* Nombre de la función: primero()
* Tipo de función: int.
* Parámetros: “lista” de tipo Lista.
* Dato de retorno: El primero, en este caso el numero 1.
* Descripción de la función: La función primero() se encarga de situar la información en el primer espacio de una lista
de tipo Lista,y de no haber uno ,crear ese espacio.

/*
* Nombre de la función: vacia().
* Tipo de función: bool.
* Parámetros: lista de tipo Lista.
* Dato de retorno: una lista vacía.
* Descripción de la función: La función vacia(), se encarga de revisar si nuestra Lista está vacía o no, para que no hayan
errores de funcionamiento con las otras funciones.

* Nombre de la función: fin().
* Tipo de función: int.
* Parámetros: lista de tipo Lista.
* Dato de retorno: ubicación del final de nuestra lista.
* Descripción de la función: La función lista(), se encarga de revisar el final de nuestra lista.
*/
#include <Structpacientes.h>
int paciente();
int medicamentos();
void inserta (tipoDato x, int p, Lista &lista); //lista para insertar la "receta"
int primero(Lista lista);
bool vacia(Lista lista);
int fin(Lista lista);
