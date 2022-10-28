#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "marcas.h"
#include "funciones.h"
#include "input.h"
#include "notebook.h"

#define LIBRE 0
#define OCUPADO 1

// MARCAS

int inicializaMarcas(eMarca array[], int tam) {
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

int hardcodearMarca(eMarca array[]){
	int todoOk = 0;
	eMarca marca[4] = {{1000,"Compaq",OCUPADO},{1001,"Asus",OCUPADO},{1002,"Acer",OCUPADO},{1003,"HP",OCUPADO}};

	if(array != NULL){
		for(int i=0; i<4; i++){
			array[i].id = marca[i].id;
			strcpy(array[i].descripcion,marca[i].descripcion);
			array[i].estado = marca[i].estado;
		}
		todoOk = 1;
		}
	return todoOk;
}

void listarUnaMarca(eMarca marca){
	printf("%-4d | %-21s |",marca.id,marca.descripcion);
}


void listarMarcas(eMarca lista[], int tam){
	if(lista != NULL && tam >= 0){
		if(tam > 0){
		printf("\n==============================");
		printf("\n| \tLISTA MARCAS         |\n");
		printf("------------------------------\n");
		for(int i = 0;i < tam; i++){
			if(lista[i].estado == OCUPADO){
				listarUnaMarca(lista[i]);
				printf("\n");
			}
		}
		printf("==============================\n");
		}
		else{
			printf("\n No hay marcas a listar\n\n");
		}

	}

}

