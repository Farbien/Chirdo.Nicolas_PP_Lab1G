/*
 ============================================================================
 Name        : 1G.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "estructuras.h"
#include "funciones.h"

#define TAM_MARCA 4
#define TAM_TIPO 4
#define TAM_SERV 4
#define TAM_NOTE 300


int main(void) {
	setbuf(stdout);

	eMarca listaMarcas[TAM_MARCA];
	eTipo listasTipos[TAM_TIPO];
	eServicio listaServicios[TAM_SERV];
	eNotebook listaNotebook[TAM_NOTE];

	int opcion;

	harcodearMarca(listaMarcas, TAM_MARCA);
	harcodearTipos(listasTipos, TAM_TIPO);
	harcodearServicios(listaServicios, TAM_SERV);
	inicializarNotebook(eNotebook listaNotebook[], TAM_NOTE);

	do{
		opcion = mostrarManu;
		switch(opcion)){
			case 'A':
			break;
			case 'B':
			break;
			case 'C':
			break;
			case 'D':
			break;
			case 'E':
			break;
			case 'F':
			break;
			case 'H':
			break;
			case 'I':
				printf("\nSaliendo del sistema...\n")
			break;
			default:
				printf("\n---ERROR: Opci%cn inv%clida\n",162,160);
			break;
		}

	}while(opcion != 'I');





	return EXIT_SUCCESS;
}
