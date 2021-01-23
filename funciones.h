//Funciones o Prototipos
/*
* Nombre de la funci�n: paciente.
* Tipo de funci�n: int
* Par�metros: no tiene.
* Dato de retorno: datos almacenados en variantes como nombre,rut,edad,etc... ;
* Descripci�n de la funci�n: La funci�n paciente() es de recepci�n de datos, datos para reconocimiento de paciente y futura
localizaci�n del misma, ya que todo esto ser� acompa�ado con su receta de la funci�n medicamentos.

* Nombre de la funci�n: medicamentos()
* Tipo de funci�n: int.
* Par�metros: No tiene.
* Dato de retorno: Guarda todo las variables en un .txt y adem�s se inserta la informaci�n en una Lista.
* Descripci�n de la funci�n: La funci�n medicamentos() se encarga de solicitar el medicamento a suministrar,dosis y
calcular la concentraci�n, luego se guarda en un .txt para luego pasar a la siguiente funci�n inserta().

* Nombre de la funci�n: inserta()
* Tipo de funci�n: void.
* Par�metros: �x� de tipo char(aunque tipoDato puede variar).
* �p� de tipo int y lista de tipo Lista.
* Dato de retorno: Retorna el siguiente punto en nuestra lista;
* Descripci�n de la funci�n: La funci�n inserta() se encarga de tomar toda la informaci�n puesta en la receta,
e insertarlo en una lista de tipo Lista, ya que en el caso de querer descartar el .txt, se podr�a realizar una funci�n
de b�squeda por rut,nombre u otra variable almacenada.
/*
* Nombre de la funci�n: primero()
* Tipo de funci�n: int.
* Par�metros: �lista� de tipo Lista.
* Dato de retorno: El primero, en este caso el numero 1.
* Descripci�n de la funci�n: La funci�n primero() se encarga de situar la informaci�n en el primer espacio de una lista
de tipo Lista,y de no haber uno ,crear ese espacio.

/*
* Nombre de la funci�n: vacia().
* Tipo de funci�n: bool.
* Par�metros: lista de tipo Lista.
* Dato de retorno: una lista vac�a.
* Descripci�n de la funci�n: La funci�n vacia(), se encarga de revisar si nuestra Lista est� vac�a o no, para que no hayan
errores de funcionamiento con las otras funciones.

* Nombre de la funci�n: fin().
* Tipo de funci�n: int.
* Par�metros: lista de tipo Lista.
* Dato de retorno: ubicaci�n del final de nuestra lista.
* Descripci�n de la funci�n: La funci�n lista(), se encarga de revisar el final de nuestra lista.
*/
#include <Structpacientes.h>
int paciente();
int medicamentos();
void inserta (tipoDato x, int p, Lista &lista); //lista para insertar la "receta"
int primero(Lista lista);
bool vacia(Lista lista);
int fin(Lista lista);
