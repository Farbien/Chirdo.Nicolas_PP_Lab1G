#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "estructuras.h"
#include "tipos.h"
#include "funciones.h"
#include "input.h"


int harcodearTipos(eTipo array[]){
	int todoOk = 0;
	eTipo tipo[4] = {{1000,"Gamer"},{1001,"Disenio"},{1002,"Ultrabook"},{1003,"Normalita"}};

	if(array != NULL){
		for(int i=0; i<4; i++){
			array[i].id = tipo[i].id;
			strcpy(array[i].descripcion,tipo[i].descripcion);
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
			listarUnTipo(lista[i]);
			printf("\n");
		}
		printf("==============================\n");
		}
		else{
			printf("\n No hay tipos a listar\n\n");
		}

	}

}
