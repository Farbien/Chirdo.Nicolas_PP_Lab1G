#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "estructuras.h"
#include "funciones.h"

char mostrarMenu(void){
	char opcion;
	printf("\n\t***** MENU PRINCIPAL\n\nA. ALTA NITEBOOK\nB. MOFICICAR NOTEBOOK\nC. BAJA NOTEBOOK\nD. LISTAR NOTEBOOKS\nE. LISTAR MARCAS\nF. LISTAR TIPOS\nG. LISTAR SERVICIOS\nH. ALTA TRABAJO\nH. LISTAR TRABAJOS\nI. SALIR\n\n Elija su opci%cn: ",162);
	fflush(stdin);
	scanf("%c",&opcion);
	opcion = toupper(opcion);

	return opcion;
}
