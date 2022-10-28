/*
 * Notebook.h
 *
 *  Created on: 21 oct. 2022
 *      Author: Nicolas
 *       */

#include "marcas.h"
#include "tipos.h"
#include "funciones.h"

#ifndef ESTRUCTURAS_H_
#define ESTRUCTURAS_H_

typedef struct{
	 int id;
	 char descripcion[20];
	 int idMarca;
	 int idTipo;
	 float precio;
	 int estado;
 }eNotebook;


int inicializarNotebook(eNotebook array[], int tam);
int buscarEspacioLibre(eNotebook array[], int tam);
eNotebook cargarNotebook(eMarca arrayM[], int tamM, eTipo arrayT[], int tamT);
int altaNotebook(eNotebook array[], int tamN, eMarca arrayM[], int tamM, eTipo arrayT[], int tamT);
int listarUnaNotebook(eNotebook array, eMarca arrayM[], int tamM, eTipo arrayT[], int tamT);
void listarNotebook(eNotebook array[], int tamN, eMarca arrayM[], int tamM, eTipo arrayT[], int tamT);
int buscarId(void);
void bajaNotebook(eNotebook array[], int tamN, eMarca arrayM[], int tamM, eTipo arrayT[], int tamT);
void modificarNotebook(eNotebook array[], int tamN, eMarca arrayM[], int tamM, eTipo arrayT[], int tamT);


#endif /* ESTRUCTURAS_H_ */
