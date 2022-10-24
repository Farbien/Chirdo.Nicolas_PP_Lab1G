#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "estructuras.h"
#include "marcas.h"
#include "tipos.h"
#include "funciones.h"
#include "input.h"

#define LIBRE 0
#define OCUPADO 1

static int idNotebook= 10000;
static int obtenerIdNotebook();
static int obtenerIdNotebook() {
	return idNotebook++;
}



int harcodearServicios(eServicio array[]){
	int todoOk = 0;

	eServicio servicio[4] = {{20000,"Bateria",2250},{20001,"Display",10300},{20002,"Teclado",4400},{20003,"Fuente",5600}};

	if(array != NULL){
		for(int i=0; i<4; i++){
			array[i].id = servicio[i].id;
			strcpy(array[i].descripcion,servicio[i].descripcion);
			array[i].precio = servicio[i].precio;
		}
		todoOk = 1;
		}
	return todoOk;
}




int inicializarNotebook(eNotebook array[], int tam) {
	int rtn = -1;
	int i;

	if (array != NULL) {
		if (tam >= 0) {
			for (i = 0; i < tam; i++) {
				array[i].isEmpty = LIBRE;
			}
			rtn = 0;
		}
	}
	return rtn;
}

int buscarEspacioLibre(eNotebook array[], int tam) {
	int rtn = -1;
	int indice;

	if (array != NULL) {
		if (tam >= 0) {
			for (indice = 0; indice < tam; indice++) {
				if(array[indice].isEmpty == LIBRE){
					rtn = indice;
					break;
				}
			}
		}
	}

	return rtn;
}

eNotebook cargarNotebook(int tam, eMarca arrayM[], int tamM, eTipo arrayT[], int tamT){
	eNotebook auxNotebook;
	int auxInt;
	int flag = 0;

	getChar(auxNotebook.descripcion, tam, "Ingrese Nomcre de la Notebook");

	do{
		printf("\nIngrese ID de la Marca: ");
		listarMarcas(arrayM, tamM);
		fflush(stdin);
		if(scanf("%d",&auxInt)){
			for(int i = 0 ; i < tamM ; i++){
				if(arrayM->id == auxInt){
					flag = 1;
					auxNotebook.idMarca = auxInt;
				break;
				}
			}
			}
		else{
			printf("\nEse ID de Marca es inv%clido\n",162);
		}

	}while(!flag);


	do{
		printf("\nIngrese ID del Tipo de Notebook: ");
		listarTipos(arrayT, tamT);
		fflush(stdin);
		if(scanf("%d",&auxInt)){
			for(int i = 0 ; i < tamT ; i++){
				if(arrayT->id == auxInt){
					flag = 1;
					auxNotebook.idTipo = auxInt;
				break;
				}
			}
		}
		else{
			printf("\nEse ID de Tipo es inv%clido\n",162);
		}

	}while(!flag);

	return auxNotebook;
}

int altaNotebook(eNotebook array[], int tam, eMarca arrayM[], int tamM, eTipo arrayT[], int tamT) {
	int rtn = -1;
	int indiceLibre;
	eNotebook auxiliar;

	if (array != NULL) {
		if (tam >= 0) {
			indiceLibre = buscarEspacioLibre(array, tam);
			if (indiceLibre >= 0) {
				auxiliar = cargarNotebook(tam, arrayM, tamM, arrayT, tamT);
				auxiliar.id = obtenerIdNotebook();
				auxiliar.isEmpty = OCUPADO;

				array[indiceLibre] = auxiliar;
				rtn = 0;
			}
			else{
				printf("\nNo hay espacio libre\n");
			}

		}
		else{
			printf("Se ha superado el l%cmite de almacenamiento asignada",161);
		}
	}
	else{
		printf("o\nOcurri%co un error y no fue posible hacer el alta",161);
	}

	return rtn;
}
void listarUnaNotebook(eNotebook array, eMarca arrayM[], int tamM, eTipo arrayT[], int tamT){
	int marca;
	int tipo;

	for( int i = 0; i < tamM; i++){
		if(array.idMarca == arrayM->id){
			marca = i;
			break;
		}
	}

	for(int i = 0; i < tamT; i++){
		if(array.idTipo == arrayT->id){
			tipo = i;
			break;
		}
	}

	printf("%-4d | %-21s | %-21d | %-21d |",array.id,array.descripcion,arrayM->descripcion[marca],arrayT->descripcion[tipo]);
}


void listarNotebook(eNotebook array[], int tamN, eMarca arrayM[], int tamM, eTipo arrayT[], int tamT){
	if(array != NULL && tamN >= 0 && arrayM != NULL && tamM > 0 && arrayT != 0 && tamT > 0){
			if(tamN > 0){
				printf("\n=============================================================================");
				printf("\n| \tLISTA NOTEBOOKS                                                         |\n");
				printf("-------------------------------------------------------------------------------\n");
				for(int i = 0;i < tamN; i++){
						if(array->isEmpty == OCUPADO){
						listarUnaNotebook(array[i], arrayM, tamM, arrayT, tamT);
						printf("\n");
						}
					}
					printf("=============================================================================\n");
					}
					else{
						printf("\n No hay Notebooks a listar\n\n");
				}

		}



}

