#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "funciones.h"
#include "notebook.h"
#include "input.h"

char mostrarMenu(void){
	char opcion;
	printf("\n\t***** MENU PRINCIPAL\n\nA. ALTA NITEBOOK\nB. MOFICICAR NOTEBOOK\nC. BAJA NOTEBOOK\nD. LISTAR NOTEBOOKS\nE. LISTAR MARCAS\nF. LISTAR TIPOS\nG. LISTAR SERVICIOS\nH. ALTA TRABAJO\nI. LISTAR TRABAJOS\nJ. INFORMES\nK. SALIR\n\n Elija su opci%cn: ",162);
	fflush(stdin);
	scanf("%c",&opcion);
	opcion = toupper(opcion);

	return opcion;
}

int mostrarMenuInformes(void){
	int opcion;
	printf("\n\t***** MENU INFORMES \n\n 1- notebooks del tipo seleccionado por el usuario.\n 2- Notebooks de una marca seleccionada. \n 3- Informar la o las notebooks más baratas. \n 4- Mostrar un listado de las notebooks separadas por marca. \n 5- Elegir un tipo y una marca y contar cuantas notebooks hay de ese tipo y esa marca. \n 6- Mostrar la o las marcas más elegidas por los clientes. \n 7- Pedir una notebook y mostrar todos los trabajos que se le hicieron a la misma. \n 8- Suma de los importes de los services de una Notebook. \n 9- Notebvook del servicio.Pedir un servicio con fecha. \n 10- Servicios realizados en una fecha.\n 11.  Salir.\n");
	fflush(stdin);
	opcion = getInt("Ingrese la opcions deseada: ", "la opcion no existe", 1, 11);

	return opcion;
}
