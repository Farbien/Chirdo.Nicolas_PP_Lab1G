/*
 * trabajo.c
 *
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "trabajos.h"
#include "servicios.h"
#include "marcas.h"
#include "tipos.h"
#include "funciones.h"
#include "input.h"
#include "notebook.h"

#define LIBRE 0
#define OCUPADO 1

static int idTrabajo= 1;
static int obtenerIdTrabajo();
static int obtenerIdTrabajo() {
	return idTrabajo++;
}


int inicializatTrabajos(eTrabajo array[], int tam) {
	int rtn = -1;

	if (array != NULL) {
		if (tam >= 0) {
			for (int i = 0; i < tam; i++) {
				array[i].estado = LIBRE;
			}
			rtn = 0;
		}
	}
	return rtn;
}

int hardcodearTrabajos(eTrabajo array[]){
	int todoOk = 0;

	eTrabajo trabajos[4] = {{1,1000,20000,{17/10/2022},1},{2,1001,2002,{19/10/2022},1},{3,1002,20003,{21/10/2022},1},{4,1003,20004,{22/10/2022},1}};

	if(array != NULL){
		for(int i=0; i<4; i++){
			array[i].id = obtenerIdTrabajo();
			array[i].idNotebook = trabajos[i].idNotebook;
			array[i].idServicio = trabajos[i].idServicio;
			array[i].fecha = trabajos[i].fecha;
			array[i].estado = trabajos[i].estado;

		}
		todoOk = 1;
		}
	return todoOk;
}

/*
int listarUnTrabajo(eTrabajo array, eNotebook arrayN[], int tamN, eServicio arrayS[], int tamS){
	int flag = 0;
	int notebook;
	int servicio;

	for( int i = 0; i < tamM; i++){
		if(array.idNotebook == arrayN[i].id){
			notebook = i;
			break;
		}
	}

	for(int i = 0; i < tamT; i++){
		if(array.idServicio == arrayS[i].id){
			servicio = i;
			break;
		}
	}

	printf("| %-4d | %-21s | %-21s | %-21s | %2d/%2d/%4d |",array.id,arrayN[notebook].descripcion,arrayS[servicio].descripcion,array.fecha.dia;array.fecha.mes,array.fecha.mes,array.fecha.anio );
	flag = 1;

	return flag;
}

}*/

