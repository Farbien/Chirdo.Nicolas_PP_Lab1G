/*
 * servicios.c
 *
 *  Created on: 28 oct. 2022
 *      Author: Nicolas
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "servicios.h"
#include "trabajos.h"
#include "marcas.h"
#include "tipos.h"
#include "funciones.h"
#include "input.h"
#include "notebook.h"

#define LIBRE 0
#define OCUPADO 1
/*
static int idServicios= 20000;
static int obtenerIdServicios();
static int obtenerIdServicios() {
	return idServicios++;
}
*/

int inicializarServiciosk(eServicio array[], int tam) {
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

int harcodearServicios(eServicio array[]){
	int todoOk = 0;

	eServicio servicio[4] = {{20000,"Bateria",2250,1},{20001,"Display",10300,1},{20002,"Teclado",4400,1},{20003,"Fuente",5600,1}};

	if(array != NULL){
		for(int i=0; i<4; i++){
			array[i].id = servicio[i].id;
			strcpy(array[i].descripcion,servicio[i].descripcion);
			array[i].precio = servicio[i].precio;
			array[i].estado = servicio[i].estado;
		}
		todoOk = 1;
		}
	return todoOk;
}


void listarUnServicio(eServicio servicio){

		printf("%-5d | %-21s | %15.2f |",servicio.id,servicio.descripcion,servicio.precio);

}


void listarServicios(eServicio lista[], int tam){
	if(lista != NULL && tam >= 0){
		if(tam > 0){
		printf("\n=================================================");
		printf("\n| \tLISTA SERVICIOS                         |\n");
		printf("-------------------------------------------------\n");
		for(int i = 0;i < tam; i++){
			if(lista[i].estado == OCUPADO){
				listarUnServicio(lista[i]);
				printf("\n");
			}
		}
		printf("=================================================\n");
		}
		else{
		}

	}

}

