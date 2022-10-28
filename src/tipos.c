#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tipos.h"
#include "funciones.h"
#include "input.h"
#include "notebook.h"

#define LIBRE 0
#define OCUPADO 1

// TIPOS

int inicializaTipos(eTipo array[], int tam) {
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

int hardcodearTipos(eTipo array[]){
	int todoOk = 0;
	eTipo tipo[4] = {{5000,"Gamer",OCUPADO},{5001,"Disenio",OCUPADO},{5002,"Ultrabook",OCUPADO},{5003,"Normalita",OCUPADO}};

	if(array != NULL){
		for(int i=0; i<4; i++){
			array[i].id = tipo[i].id;
			strcpy(array[i].descripcion,tipo[i].descripcion);
			array[i].estado = tipo[i].estado;
		}
		todoOk = 1;
		}
	return todoOk;
}

void listarUnTipo(eTipo tipo){
	printf("%-4d | %-21s |",tipo.id,tipo.descripcion);
}


void listarTipos(eTipo lista[], int tam){
	if(lista != NULL && tam >= 0){
		if(tam > 0){
		printf("\n==============================");
		printf("\n| \tLISTA TIPOS          |\n");
		printf("------------------------------\n");
		for(int i = 0;i < tam; i++){
			if(lista[i].estado == OCUPADO){
				listarUnTipo(lista[i]);
				printf("\n");
			}
		}
		printf("==============================\n");
		}
		else{
			printf("\n No hay tipos a listar\n\n");
		}

	}

}
