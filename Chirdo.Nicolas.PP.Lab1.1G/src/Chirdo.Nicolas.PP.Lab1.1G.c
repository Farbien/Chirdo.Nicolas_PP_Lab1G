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
#include "marcas.h"
#include "tipos.h"
#include "funciones.h"
#include "input.h"

#define TAM_MARCA 4
#define TAM_TIPO 4
#define TAM_SERV 4
#define TAM_NOTE 300


int main(void) {
	setbuf(stdout,NULL);

	char opcion;

	eMarca listaMarcas[TAM_MARCA];
	eTipo listasTipos[TAM_TIPO];
	eServicio listaServicios[TAM_SERV];
	eNotebook listaNotebook[TAM_NOTE];


	harcodearMarca(listaMarcas);
	harcodearTipos(listasTipos);
	harcodearServicios(listaServicios);
	inicializarNotebook(listaNotebook, TAM_NOTE);

	do{
		opcion = mostrarMenu();
		switch(opcion){
			case 'A':
				printf("\nALTA\n");
				altaNotebook(listaNotebook, TAM_NOTE, listaMarcas, TAM_MARCA, listasTipos, TAM_TIPO);
			break;
			case 'B':
			break;
			case 'C':
			break;
			case 'D':
				listarNotebook(listaNotebook, TAM_NOTE, listaMarcas, TAM_MARCA, listasTipos, TAM_TIPO);
			break;
			case 'E':
				listarMarcas(listaMarcas, TAM_MARCA);
			break;
			case 'F':
				listarTipos(listasTipos, TAM_TIPO);
			break;
			case 'H':
			break;
			case 'I':
				printf("\nSaliendo del sistema...\n");
			break;
			default:
				printf("\n---ERROR: Opci%cn inv%clida\n",162,160);
			break;
		}

	}while(opcion != 'I');





	return EXIT_SUCCESS;
}
