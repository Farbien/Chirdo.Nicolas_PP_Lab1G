#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "estructuras.h"
#include "funciones.h"
#include "input.h"

#define LIBRE 0
#define OCUPADO 1

static int idNotebook= 10000;
static int obtenerIdNotebook();
static int obtenerIdNotebook() {
	return idNotebook++;
}

int harcodearMarca(eMarca array[], int tam){
	int todoOk = 0;
	eMarca marca[tam] = {{1000,"Compaq"},{1001,"Asus"},{1002."Acer"},{1003,"HP"}};

	if(array != NULL && tam > 0){
		for(int i=0; i<tam; i++){
			array[i].id = marca[i].id;
			strcpy(array[i].descripcion,marca[i].descripcion);
		}
		todoOk = 1;
		}
	return todoOk;
}

int harcodearTipos(eTipo array[], int tam){
	int todoOk = 0;
	eTipo tipo[tam] = {{1000,"Gamer"},{1001,"Disenio"},{1002."Ultrabook"},{1003,"Normalita"}};

	if(array != NULL && tam > 0){
		for(int i=0; i<tam; i++){
			array[i].id = tipo[i].id;
			strcpy(array[i].descripcion,tipo[i].descripcion);
		}
		todoOk = 1;
		}
	return todoOk;
}

int harcodearServicios(eServicio array[], int tam){
	int todoOk = 0;

	eServicio servicio[tam] = {{20000,"Bateria",2250},{20001,"Display",10300},{20002."Teclado",4400},{20003,"Fuente",5600}};

	if(array != NULL && tam > 0){
		for(int i=0; i<tam; i++){
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
eNotebook cargarNotebook(eMarca arrayM[], int tamM, eTipo arrayT[], int tamT){
	eNotebook aux;







}

int altaNotebook(eNotebook array[], int tam, eMarca arrayM[], int tamM, eTipo arrayT[], int tamT) {
	int rtn = -1;
	int indiceLibre;
	eNotebook auxiliar;

	if (array != NULL) {
		if (tam >= 0) {
			indiceLibre = buscarEspacioLibre(array, tam);
			if (indiceLibre >= 0) {
				auxiliar = cargarNotebook(arrayM, tamM, arrayT, tamT);
				auxiliar.id = obtenerIdNotebook();
				auxiliar.isEmpty = OCUPADO;

				array[indiceLibre] = auxiliar;
				rtn = 0;
			}
		}
	}

	return rtn;
}
