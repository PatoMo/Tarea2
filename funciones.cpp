//funciones o ejecuciones de los prototipos
#include <stdio.h>
#include <string.h>
#include <Structpacientes.h>
int paciente(){
printf("Bienvenido \n");
gets(nada);
printf("Ingrese nombre del paciente: \n");
gets(name); //lee la cadena de caracteres y las almacena en name
printf("Ingrese rut del paciente,edad y numero de cama: \n");
scanf("%s %d %d",char rut,int &edad,int &cama);
printf("Ingrese peso del paciente en kilogramos: \n");
scanf("%d",int &peso);
}

int medicamentos(){
  printf("¿Qué medicamento desea dosificar? \n");
    printf( " 1.  Adrenalina \n");
    printf( " 2.  Amiodarona \n");
    printf( " 3.  Cloruro de Potasio \n");
    printf( " 4.  Esmeron \n");
    printf( " 5.  Fentanilo \n");
    printf( " 6.  Labetalol \n");
    printf( " 7.  Lidocaina \n");
    printf( " 8.  Midazolam \n");
    printf( " 9.  Nitroglicerina \n");
    printf( " 10. Nitropusiato \n");
    printf( " 11. Noradrenalina \n");
    printf( " 12. Propofol \n");
    do{
        printf("Introduzca la opción(1-12) y pulse enter: \n");
        scanf("%d",&opcion);
        }
    while ((opcion <1) && (opcion>12) && (opcion!=1234)); //CODIGO 1234 PARA SACAR LOOP
    switch ( opcion ){
case 1: printf("\n Dosificar Adrenalina: ");
       do{
            printf( "\n   Concentración(mg)/Dilusión(ml) de Adrenalina : " ); //ADRENALINA
            scanf( "%f %f", &cantidadmg,&cantidadml ); //hacer lo que haya que hacer
            concentracion= (cantidadmg/cantidadml);
            printf( "Su dosis es %.4f mg/ml\n",concentracion );
            printf("Agregue la dosis: (gramo*kilogramo*minuto) \n");
            scanf("%f",&dosis);
            printf("La dosis es %.4f, ¿confirmar?   \n",dosis); //CONFIRMAR CON PALABRA???
        do{printf("Aceptar o Cancelar \n"); //Hice un Loop para darle a aceptar o cancelar y al presionar cancelar deberia empezar
            scanf("%s",confirmar);}
            while((strcmp(confirmar,"aceptar") !=0) && (strcmp(confirmar,"cancelar") !=0));
}
            while(strcmp(confirmar, "aceptar") != 0);
            fprintf(archivo,"Paciente %s , edad %d ,se le receto adrenalina. Su concentracion de adrenalina fue de %f mg/ml con una dosis de %f. Fecha: %s /n",name,edad,cama,concentracion,dosis,fecha);
            break; //este fprintf es lo guardaremos en la lista

case 2: printf( "\n   Dosificar Amiodarona: ");
do{
           printf( "\n  Dosificación mg/hora(1) o ml/hora(2) de Amiodarona : " ); //AMIODARONA
           scanf("%d",opcion);
           if(opcion==1){
            printf("\n Ingrese la dosis en mg/hora");
            scanf( "%f %f", &cantidadmg,&horas );
            concentracion= (cantidadmg/horas);
           }else if(opcion==2){
           printf("\n Coloque la dosis en ml/hora");
           scanf( "%f %f", &cantidadml,&horas );
           r.concentracion=(cantidadml/horas);
           }
            else {"Opcion no valida";}
}
while((opcion!=1) && (opcion!=2));
if(opcion=1){
    printf( "Su dosis en %.4f mg/hora \n",concentracion );
}
else{ printf("Su dosis en %.4f ml/hora \n",concentracion);

}
        do{printf("Aceptar o Cancelar \n"); //Hice un Loop para darle a aceptar o cancelar y al presionar cancelar deberia empezar
            scanf("%s",confirmar);}
            while((strcmp(confirmar,"aceptar") !=0) && (strcmp(confirmar,"cancelar") !=0));

            while(strcmp(confirmar, "aceptar") != 0);
            char bitacora=("Paciente %s con edad %d en cama %d se le receto amiodarona.",name,edad,cama)
            fprintf(archivo,bitacora);
            if(opcion==1){
              fprint=(archivo,"Su concentracion de amiodarona fue de %f mg/hora Fecha: %s \n",concentracion,fecha);
            }
            else{
               fprintf=(archivo,"Su concentracion de amiodarona fue de %f ml/hora Fecha: %s \n",concentracion,fecha);}
            break;

case 3: printf( "\n   Dosificar Cloruro de Potasio: ");
 do{
            printf( "\n   Concentración(mg)/Dilusión(ml) de Cloruro de Potasio : " );
            scanf( "%f %f", &cantidadmg,&cantidadml );
            concentracion= (cantidadmg/cantidadml);
            printf("La dosis es %.4f mg/ml por hora, ¿confirmar?   \n",concentracion);
        do{printf("Aceptar o Cancelar \n");
            scanf("%s",confirmar);}
            while((strcmp(confirmar,"aceptar") !=0) && (strcmp(confirmar,"cancelar") !=0));
}
            while(strcmp(confirmar, "aceptar") != 0);
            fprintf(archivo,"Paciente %s con edad %d en cama %d se le receta cloruro de potasio. Su concentracion de cloruro de potasio fue de %f mg/ml por hora Fecha: %s \n",name,edad,cama,concentracion,fecha)
                      break;


case 4: printf( "\n   Dosificar Esmeron: ");
            do{
            printf( "\n   Concentración(mg)/Dilusión(ml) de Esmeron : " );
            scanf( "%f %f", &cantidadmg,&cantidadml ); //hacer lo que haya que hacer
            concentracion= (cantidadmg/cantidadml);
            printf( "Su dosis es %.4f mg/ml\n",concentracion );
            printf("Agregue la dosis: (gamma*kilogramo*minuto) \n");
            scanf("%f",&dosis);
            printf("La dosis es %.4f, ¿confirmar?   \n",dosis);
        do{printf("Aceptar o Cancelar \n");
            scanf("%s",confirmar);}
            while((strcmp(confirmar,"aceptar") !=0) && (strcmp(confirmar,"cancelar") !=0));
}
            while(strcmp(confirmar, "aceptar") != 0);
           fprintf(archivo,"Paciente %s con edad %d en cama %d se le recetó Esmeron. Su concentracion de Esmeron fue de %f gamma*kilogramo por minuto Fecha: %s \n",name,edad,cama,concentracion,fecha)
            break;

case 5: printf( "\n   Dosificar Fentanilo: ");
            //microgramo kilo hora
           do{
            printf( "\n   Concentración(mg)/Dilusión(ml) de Fentanilo : " );
            scanf( "%f %f", &cantidadmg,&cantidadml ); //hacer lo que haya que hacer
            concentracion= (cantidadmg/cantidadml);
            printf( "Su dosis es %.4f mg/ml\n",concentracion );
            printf("Agregue la dosis: (gamma*kilogramo*minuto) \n");
            scanf("%f",&dosis);
            printf("La dosis es %.4f, ¿confirmar?   \n",dosis);
        do{printf("Aceptar o Cancelar \n");
            scanf("%s",confirmar);}
            while((strcmp(confirmar,"aceptar") !=0) && (strcmp(confirmar,"cancelar") !=0));
            }
            while(strcmp(confirmar, "aceptar") != 0);
           fprintf(archivo,"Paciente %s con edad %d en cama %d se le recetó Fentanilo. Su concentracion de Fentanilo fue de %f gamma*kilogramo por hora Fecha: %s \n",name,edad,cama,concentracion,fecha)
            break;
case 6: printf( "\n   Dosificar Labetalol: ");
            //gramos en hora
            do{
           printf( "\n  Dosificación mg/hora(1) o ml/hora(2) de Labetalol : " );
           scanf("%d",opcion);
           if(opcion==1){
            printf("\n Ingrese la dosis en g/hora");
            scanf( "%f %f", &cantidadmg,&horas );
            concentracion= (cantidadmg/horas);
           }else if(opcion==2){
           printf("\n Coloque la dosis en ml/hora");
           scanf( "%f %f", &cantidadml,&horas );
           concentracion=(cantidadml/horas);
           }
            else {"\n Opcion no valida";}
}
while((opcion!=1) && (opcion!=2));
if(opcion=1){
    printf( " Su dosis en %.4f g/hora \n",concentracion );
}
else{ printf("Su dosis en %.4f ml/hora \n",concentracion);

}
        do{printf("Aceptar o Cancelar \n"); //Hice un Loop para darle a aceptar o cancelar y al presionar cancelar deberia empezar
            scanf("%s",confirmar);}
            while((strcmp(confirmar,"aceptar") !=0) && (strcmp(confirmar,"cancelar") !=0));

            while(strcmp(confirmar, "aceptar") != 0);
            fprintf(archivo,"Paciente %s con edad %d en cama %d se le recetó labetalol. ",name,edad,cama );
            if(opcion==1){
              fprintf(archivo,"Su concentracion de labetalol fue de %f g/hora Fecha: %s",concentracion,fecha);

            }
            else{fprintf(archivo,"Su concentracion de labetalol fue de %f ml/hora Fecha: %s \n",concentracion,fecha);
              }
            getch();
            break;
case 7: printf( "\n   Dosificar Lidocaina: ");
            // miligramos minuto
             do{
            printf( "\n   Concentración(mg)/Dilusión(ml) de Lidocaina : " );
            scanf( "%f %f", &cantidadmg,&cantidadml );
            r.concentracion= (cantidadmg/cantidadml);
            printf( "Su dosis es %.4f mg/ml\n",concentracion );
            printf("Agregue la dosis: (miligramo*minuto) \n");
            scanf("%f",&dosis);
            printf("La dosis es %.4f, ¿confirmar?   \n",dosis);
        do{printf("Aceptar o Cancelar \n");
            scanf("%s",confirmar);}
            while((strcmp(confirmar,"aceptar") !=0) && (strcmp(confirmar,"cancelar") !=0));
}
            while(strcmp(confirmar, "aceptar") != 0);
            fprintf(archivo,"Paciente %s con edad %d en cama %d se le recetó Lidocaina. Su concentracion de lidocaina fue de %f mg/ml con una dosis de %f Fecha: %s \n",name,edad,cama,concentracion,dosis,fecha);
            getch();
            break;
case 8: printf( "\n   Dosificar Midazolam: ");
            //miligramos kilo hora
             do{
            printf( "\n   Concentración(mg)/Dilusión(ml) de Midazolam : " );
            scanf( "%f %f", &cantidadmg,&cantidadml );
            concentracion= (cantidadmg/cantidadml);
            printf( "Su dosis es %.4f mg/ml\n",concentracion );
            printf("Agregue la dosis: (mg*kilogramo*hora) \n");
            scanf("%f",&dosis);
            printf("La dosis es %.4f, ¿confirmar?   \n",dosis);
        do{printf("Aceptar o Cancelar \n");
            scanf("%s",confirmar);}
            while((strcmp(confirmar,"aceptar") !=0) && (strcmp(confirmar,"cancelar") !=0));
}
            while(strcmp(confirmar, "aceptar") != 0);
            fprintf(archivo,"Paciente %s con edad %d en cama %d se le receto Midazolam. Su concentracion de midazolam fue de %f mg/ml con una dosis de %f Fecha: %s",name,edad,cama,concentracion,dosis,fecha);
            break;
case 9: printf( "\n   Dosificar Nitroglicerina: ");
            //ml/hora mg/hora
                 do{
           printf( "\n  Dosificación mg/hora(1) o ml/hora(2) de Nitroglicerina : " );
           scanf("%d",opcion);
           if(opcion==1){
            printf("\n Ingrese la dosis en mg/hora");
            scanf( "%f %f", &cantidadmg,&horas );
            concentracion= (cantidadmg/horas);
           }else if(opcion==2){
           printf("\n Coloque la dosis en ml/hora");
           scanf( "%f %f", &cantidadml,&horas );
           concentracion=(cantidadml/horas);
           }
            else {"\n Opcion no valida";}
}
while((opcion!=1) && (opcion!=2));
if(opcion=1){
    printf( " Su dosis en %.4f mg/hora \n",concentracion );
}
else{ printf("Su dosis en %.4f ml/hora \n",concentracion);

}
        do{printf("Aceptar o Cancelar \n"); //Hice un Loop para darle a aceptar o cancelar y al presionar cancelar deberia empezar
            scanf("%s",confirmar);}
            while((strcmp(confirmar,"aceptar") !=0) && (strcmp(confirmar,"cancelar") !=0));

            while(strcmp(confirmar, "aceptar") != 0);
            fprintf(archivo,"Paciente %s con edad %d en cama %d se le recetó Nitroglicerina. ",name,edad,cama);

            if(opcion==1){
              fprintf(archivo,"Su concentracion de Nitroglicerina fue de %f mg/hora Fecha:%s \n",concentracion.fecha);

            }
            else{fprintf(archivo,"Su concentracion de Nitroglicerina fue de %f ml/hora Fecha:%s \n",concentracion.fecha);}

                      break;
case 10: printf( "\n   Dosificar Nitroprusiato: ");
            //ml/hora mg/hora
               do{
           printf( "\n  Dosificación mg/hora(1) o ml/hora(2) de Nitroprusiato : " );
           scanf("%d",opcion);
           if(opcion==1){
            printf("\n Ingrese la dosis en mg/hora");
            scanf( "%f %f", &cantidadmg,&horas );
            concentracion= (cantidadmg/horas);
           }else if(opcion==2){
           printf("\n Coloque la dosis en ml/hora");
           scanf( "%f %f", &cantidadml,&horas );
           concentracion=(cantidadml/horas);
           }
            else {"\n Opcion no valida";}
}
while((opcion!=1) && (opcion!=2));
if(opcion=1){
    printf( " Su dosis en %.4f mg/hora \n",concentracion );
}
else{ printf("Su dosis en %.4f ml/hora \n",concentracion);

}
        do{printf("Aceptar o Cancelar \n");
            scanf("%s",confirmar);}
            while((strcmp(confirmar,"aceptar") !=0) && (strcmp(confirmar,"cancelar") !=0));

            while(strcmp(confirmar, "aceptar") != 0);
            fprintf(archivo,"Paciente %s con edad %d en cama %d se le recetó Nitroprusiato. ",name,edad,cama);
            if(opcion==1){
              fprintf(archivo,"Su concentracion de nitroprusiato fue de %f mg/hora Fecha: %s \n",concentracion,fecha);
            }
            else{
               fprintf(archivo,"Su concentracion de nitroprusiato fue de %f ml/hora Fecha: %s \n",concentracion,fecha);}
            break;
case 11: printf( "\n   Dosificar Noradrenalina: ");
            // microgramo kilo minuto
              do{
            printf( "\n   Concentración(mg)/Dilusión(ml) de Noradrenalina : " );
            scanf( "%f %f", &cantidadmg,&cantidadml );
            concentracion= (cantidadmg/cantidadml);
            printf( "Su dosis es %.4f mg/ml\n",concentracion );
            printf("Agregue la dosis: (ug*kilogramo*hora) \n");
            scanf("%f",&dosis);
            printf("La dosis es %.4f, ¿confirmar?   \n",dosis);
        do{printf("Aceptar o Cancelar \n");
            scanf("%s",confirmar);}
            while((strcmp(confirmar,"aceptar") !=0) && (strcmp(confirmar,"cancelar") !=0));
}
            while(strcmp(confirmar, "aceptar") != 0);
            fprinft(archivo,"Paciente %s con edad %d en cama %d se le receta noradrenalina. Su concentracion de noradrenalina fue de %f mg/ml con una dosis de %f Fecha: %s \n",name,edad,cama,concentracion,dosis,fecha);
            break;
case 12: printf( "\n   Dosificar Propofol: ");
            // mg kilo hora
              do{
            printf( "\n   Concentración(mg)/Dilusión(ml) de Propofol : " );
            scanf( "%f %f", &cantidadmg,&cantidadml );
            r.concentracion= (cantidadmg/cantidadml);
            printf( "Su dosis es %.4f mg/ml\n",concentracion );
            printf("Agregue la dosis: (mg*kilogramo*hora) \n");
            scanf("%f",&dosis);
            printf("La dosis es %.4f, ¿confirmar?   \n",dosis);
        do{printf("Aceptar o Cancelar \n");
            scanf("%s",confirmar);}
            while((strcmp(confirmar,"aceptar") !=0) && (strcmp(confirmar,"cancelar") !=0));
}
            while(strcmp(confirmar, "aceptar") != 0);
            fprintf(archivo,"Paciente %s de edad %d en cama %s se le receta Propofol. Su concentracion de propofol fue de %f mg/ml con una dosis de %f Fecha: %s",name,edad,cama,concentracion,dosis,fecha);
            break;
            }
            return opcion;
            } //fin medicamentos

            //INICIO DE FUNCIONES TIPO LISTA PARA REVISAR SI ESTÁ VACIA, INSERTAR EN PRIMERA POSICIÓN, Y TENER UN FIN DE LISTA

void inserta (tipoDato x, int p, Lista &lista){ //funcion inserta con x siendo el fprintf
if(p>fin(lista) || p<primero(lista)){
  printf("Error la función inserta no es valida");
  return;
}
Lista aux = lista;
nodo* n = new nodo;
n->dato=x;

if(p==primero(lista)){
lista = n;
lista->next = aux;
   }else{ for(i=0, i<p-2;i++){
     aux = aux->next;
   }
n->next = aux->next;
aux-next= n;
   }

}
int primero(Lista lista){
  return 1;

}

bool vacia(Lista lista){
 printf("Funcion vacia");
 return(lista=NULL);
}

int fin(Lista lista){
  if(vacia(lista)){
    return primero(lista);
  }else{ return 1+fin(lista->next);
  }
}
