#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "estructuras.h"
#include "marcas.h"
#include "funciones.h"
#include "input.h"

// MARCAS


int harcodearMarca(eMarca array[]){
	int todoOk = 0;
	eMarca marca[4] = {{1000,"Compaq"},{1001,"Asus"},{1002,"Acer"},{1003,"HP"}};

	if(array != NULL){
		for(int i=0; i<4; i++){
			array[i].id = marca[i].id;
			strcpy(array[i].descripcion,marca[i].descripcion);
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
			listarUnaMarca(lista[i]);
			printf("\n");
		}
		printf("==============================\n");
		}
		else{
			printf("\n No hay marcas a listar\n\n");
		}

	}

}

