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

#include "servicios.h"
#include "trabajos.h"
#include "marcas.h"
#include "tipos.h"
#include "funciones.h"
#include "input.h"
#include "notebook.h"
#include "notebook.h"

#define TAM_MARCA 300
#define TAM_TIPO 300
#define TAM_SERV 300
#define TAM_NOTE 300
#define TAM_TRAB 2000


int main(void) {
	setbuf(stdout,NULL);

	char opcion;
	int opcionInformes;

	eMarca listaMarcas[TAM_MARCA];
	eTipo listasTipos[TAM_TIPO];
	eServicio listaServicios[TAM_SERV];
	eNotebook listaNotebook[TAM_NOTE];
	eTrabajo listaTrabajos[TAM_TRAB];


	inicializarNotebook(listaNotebook, TAM_NOTE);
	inicializaMarcas(listaMarcas, TAM_MARCA);
	inicializarServiciosk(listaServicios, TAM_SERV);
	inicializaTipos(listasTipos,TAM_TIPO);
	inicializatTrabajos(listaTrabajos, TAM_TRAB);


	hardcodearMarca(listaMarcas);
	hardcodearTipos(listasTipos);
	harcodearServicios(listaServicios);
	hardcodearTrabajos(listaTrabajos);




	do{
		opcion = mostrarMenu();
		switch(opcion){
			case 'A':
				altaNotebook(listaNotebook, TAM_NOTE, listaMarcas, TAM_MARCA, listasTipos, TAM_TIPO);
			break;
			case 'B':
				modificarNotebook(listaNotebook, TAM_NOTE,listaMarcas, TAM_MARCA,listasTipos, TAM_TIPO);
			break;
			case 'C':
				bajaNotebook(listaNotebook, TAM_NOTE, listaMarcas, TAM_MARCA, listasTipos, TAM_TIPO);
			break;
			case 'D':
				listarNotebook(listaNotebook, TAM_NOTE, listaMarcas, TAM_MARCA, listasTipos, TAM_TIPO);
				system("pause");
			break;
			case 'E':
				listarMarcas(listaMarcas, TAM_MARCA);
				system("pause");
			break;
			case 'F':
				listarTipos(listasTipos, TAM_TIPO);
				system("pause");
			break;
			case 'G':
				listarServicios(listaServicios, TAM_SERV);
				system("pause");
			break;
			case 'H':
			//	listarUnTrabajo(listaTrabajos,listaNotebook,TAM_NOTE,listaServicios,TAM_SERV);
			break;
			case 'I':
			break;
			case 'j':
				do{
					opcionInformes = mostrarMenuInformes();
					switch(opcionInformes){
						case 1:
						break;
						case 2:
						break;
						case 3:
						break;
						case 4:
						break;
						case 5:
						break;
						case 6:
						break;
						case 7:
						break;
						case 8:
						break;
						case 9:
						break;
						case 10:
						break;
						case 11:
						break;
					}
				}while(opcionInformes != 11);

			break;
			case 'k':
				printf("\nSaliendo del sistema...\n");
			break;
			default:
				printf("\n---ERROR: Opci%cn inv%clida\n",162,160);
			break;
		}

	}while(opcion != 'k');


	return EXIT_SUCCESS;
}
