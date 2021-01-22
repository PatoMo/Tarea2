//Estructuras
#ifndef struct_pacientes_h
#define struct_pacientes_h
#define tipoDato char;      //guardado tipo char ya que es información de palabras la que será guardada

    struct nodo{            //nodo usado para la Lista
      tipoDato nodo;
      struct nodo* next;
    };
#define Lista nodo*
#endif

    struct paciente{
    char name[60],rut[20];
    int edad,peso,cama;
    struct receta;
        };

    struct receta{
    float dosis,concentracion,horas;
    float cantidadmg,cantidadml;
    };

    struct opciones{
      char confirmar[10],nada[1];
    int opcion,opciones;
    }


