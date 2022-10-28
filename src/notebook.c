#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "servicios.h"
#include "trabajos.h"
#include "marcas.h"
#include "tipos.h"
#include "funciones.h"
#include "input.h"
#include "notebook.h"
#include "notebook.h"

#define LIBRE 0
#define OCUPADO 1

static int idNotebook= 10000;
static int obtenerIdNotebook();
static int obtenerIdNotebook() {
	return idNotebook++;
}




int inicializarNotebook(eNotebook array[], int tam) {
	int rtn = -1;
	int i;

	if (array != NULL) {
		if (tam >= 0) {
			for (i = 0; i < tam; i++) {
				array[i].estado = LIBRE;
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
				if(array[indice].estado == LIBRE){
					rtn = indice;
					break;
				}
			}
		}
	}

	return rtn;
}

eNotebook cargarNotebook(eMarca arrayM[], int tamM, eTipo arrayT[], int tamT){
	eNotebook auxNotebook;
	int auxInt = 0;
	int flagM = 0;
	int flagT = 0;

	getChar(auxNotebook.descripcion, 20, "Ingrese Nombre de la Notebook: ");

	do{
		printf("\nIngrese ID de la Marca: ");
		listarMarcas(arrayM, tamM);
		auxInt = buscarId();
		if(auxInt){
			for(int i = 0 ; i < tamM ; i++){
				if(arrayM[i].id == auxInt){
					flagM = 1;
					auxNotebook.idMarca = auxInt;
				break;
				}
			}
			if(!flagM){
				printf("\nEse ID de Marca es inv%clido\n",162);
				system("pause");
			}
			}


	}while(!flagM);


	do{
		printf("\nIngrese ID del Tipo de Notebook: ");
		listarTipos(arrayT, tamT);
		auxInt = buscarId();
		if(auxInt){
			for(int i = 0 ; i < tamT ; i++){
				if(arrayT[i].id == auxInt){
					flagT = 1;
					auxNotebook.idTipo = auxInt;
				break;
				}
			}
			if(!flagT){
				printf("\nEse ID de Tipo es inv%clido\n",162);
				system("pause");
			}

		}
	}while(!flagT);

	auxNotebook.precio = getFloat("Ingrese el importe de la Notebook: ", "Importe no valido", 0);

	return auxNotebook;
}

int altaNotebook(eNotebook array[], int tam, eMarca arrayM[], int tamM, eTipo arrayT[], int tamT) {
	int rtn = -1;
	int indiceLibre;
	eNotebook auxiliar;

	if (array != NULL && arrayM != NULL && tamM > 0 && arrayT != 0 && tamT > 0){
		if (tam >= 0) {
			printf("\nALTA NOTEBOOK\n");
			indiceLibre = buscarEspacioLibre(array, tam);
			if (indiceLibre >= 0) {
				auxiliar = cargarNotebook(arrayM, tamM, arrayT, tamT);
				auxiliar.id = obtenerIdNotebook();
				auxiliar.estado = OCUPADO;

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
int listarUnaNotebook(eNotebook array, eMarca arrayM[], int tamM, eTipo arrayT[], int tamT){
	int flag = 0;
	int marca;
	int tipo;

	for( int i = 0; i < tamM; i++){
		if(array.idMarca == arrayM[i].id){
			marca = i;
			break;
		}
	}

	for(int i = 0; i < tamT; i++){
		if(array.idTipo == arrayT[i].id){
			tipo = i;
			break;
		}
	}

	printf("| %-4d | %-21s | %-21s | %-21s | %18.2f |",array.id,array.descripcion,arrayM[marca].descripcion,arrayT[tipo].descripcion,array.precio);
	flag = 1;

	return flag;
}


void listarNotebook(eNotebook array[], int tamN, eMarca arrayM[], int tamM, eTipo arrayT[], int tamT){
	int hayCargados = 0;
	if(array != NULL && tamN >= 0 && arrayM != NULL && tamM > 0 && arrayT != 0 && tamT > 0){
			if(tamN > 0){
				printf("\n======================================================================================================");
				printf("\n| \tLISTA NOTEBOOKS                                                                              |\n");
				printf("------------------------------------------------------------------------------------------------------\n");
				printf("|  ID   |  DESCRIPCION          |      MARCA            |  TIPO                 |  PRECIO            |\n");
				printf("------------------------------------------------------------------------------------------------------\n");

				for(int i = 0;i < tamN; i++){
					if(array[i].estado == OCUPADO){
					hayCargados = listarUnaNotebook(array[i], arrayM, tamM, arrayT, tamT);
					printf("\n");
					}
				}
				if(!hayCargados){
					printf("No hay Notebook cargadas pasra mostrar\n");
				}
					printf("======================================================================================================\n");


		}
	}



}

int buscarId(void){
	int auxId;

	fflush(stdin);
	while(!scanf("%d",&auxId)){

		printf("\n** ERROR: reingrese el ID: ");
		fflush(stdin);
		scanf("%d",&auxId);
	}

	return auxId;
}


void bajaNotebook(eNotebook array[], int tamN, eMarca arrayM[], int tamM, eTipo arrayT[], int tamT){
	if(array != NULL && tamN >= 0 && arrayM != NULL && tamM > 0 && arrayT != 0 && tamT > 0){
		int auxId;
		int flag = 0;
		int i;

		printf("\nBAJA NOTEBOOK\n");
		listarNotebook(array, tamN, arrayM, tamM, arrayT, tamT);
		printf("\nIngrese el ID de la Notebook a dar de baja: ");

		auxId = buscarId();

		for( i = 0; i < tamN; i++){
			if(array[i].id == auxId){
				array[i].estado = LIBRE;
				flag = 1;
				break;
			}
		}
		if(flag){
			printf("\nSe dio de baja el ID %d de la Notebook %s\n",array[i].id,array[i].descripcion);
			system("pause");
		}
		else{
			printf("\nEl ID %d no existe. \n",auxId);
			system("pause");
		}
	}
}



void modificarNotebook(eNotebook arrayN[], int tamN, eMarca arrayM[], int tamM, eTipo arrayT[], int tamT){
	eNotebook aux;
	int auxInt;
	int opcion;
	int flag = 0;

	int i;

	listarNotebook(arrayN, tamN, arrayM, tamM, arrayT, tamT);
	auxInt = buscarId();

	for( i = 0 ; i < tamN ; i++){
		if(arrayN[i].id  == auxInt){
			aux = arrayN[i];
			break;
		}
		else{
			printf("ID no encontrado\n");
		}
	}
	do{
		opcion = getInt("Ingrese el campo a modificar\n 1. Precio\n 2.Tipo\n 3. Regresar\nSelecccione: ", "opcion no existente. vuelva a elegir: ", 1, 3);
		switch(opcion){
			case 1:
				aux.precio = getFloat("Ingrese nuevo precio: ", "precio invalido", 0);
			break;
			case 2:
				do{
				listarTipos(arrayT, tamT);
				auxInt = getInt("Ingrese ID del tipo a modificar", "ID invalido", 0, 10000000);
				for( int j ; j < tamT; j++){
					if(auxInt == arrayT[j].id && arrayT[j].estado == OCUPADO){
						arrayN[i].idTipo = auxInt;
						flag = 1;
						break;
					}
				}
				}while(!flag);
			break;
		}
	}while(opcion != 3);

	arrayN[i] = aux;

}

