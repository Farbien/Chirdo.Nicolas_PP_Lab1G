/*
 * Notebook.h
 *
 *  Created on: 21 oct. 2022
 *      Author: Nicolas
 *       */

#include "marcas.h"
#include "tipos.h"
#ifndef ESTRUCTURAS_H_
#define ESTRUCTURAS_H_

 typedef struct{
		 int dia;
		 int mes;
		 int anio;
 }eFecha;

typedef struct{
	 int id;
	 char descripcion[21];
	 int idMarca;
	 int idTipo;
	 int isEmpty;
 }eNotebook;

typedef struct{
	 int id;
	 char descripcion[21];
	 float precio;
 }eServicio;

typedef struct{
	 int id;
	 int idNotebook;
	 int idServicio;
	 eFecha fecha;
 }eTrabajo;




int harcodearServicios(eServicio array[]);
int inicializarNotebook(eNotebook array[], int tam);
int buscarEspacioLibre(eNotebook array[], int tam);
eNotebook cargarNotebook(int tamN, eMarca arrayM[], int tamM, eTipo arrayT[], int tamT);
int altaNotebook(eNotebook array[], int tamN, eMarca arrayM[], int tamM, eTipo arrayT[], int tamT);
int listarUnaNotebook(eNotebook array, eMarca arrayM[], int tamM, eTipo arrayT[], int tamT);
void listarNotebook(eNotebook array[], int tamN, eMarca arrayM[], int tamM, eTipo arrayT[], int tamT);
void bajaNotebook(eNotebook array[], int tamN, eMarca arrayM[], int tamM, eTipo arrayT[], int tamT);

#endif /* ESTRUCTURAS_H_ */
