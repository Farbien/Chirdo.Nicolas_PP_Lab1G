/*
 * Notebook.h
 *
 *  Created on: 21 oct. 2022
 *      Author: Nicolas
 */

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
	 }eMarca;

	typedef struct{
		 int id;
		 char descripcion[21];
	 }eTipo;

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


int harcodearMarca(eMarca array[], int tam);
int harcodearTipos(eTipo array[], int tam);
int harcodearServicios(eServicio array[], int tam);
int inicializarNotebook(eNotebook array[], int tam);
int buscarEspacioLibre(eNotebook array[], int tam);
eNotebook cargarNotebook(eMarca arrayM[], int tamM, eTipo arrayT[], int tamT);
int altaNotebook(eNotebook array[], int tamN, eMarca arrayM[], int tamM, eTipo arrayT[], int tamT);

#endif /* ESTRUCTURAS_H_ */
