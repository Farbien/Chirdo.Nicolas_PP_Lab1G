/*
 * marcas.h
 *
 *  Created on: 23 oct. 2022
 *      Author: Nicolas
 */

#ifndef MARCAS_H_
#define MARCAS_H_

 typedef struct{
	 int id;
	 char descripcion[21];
	 int estado;
 }eMarca;

#endif /* MARCAS_H_ */

int inicializaMarcas(eMarca array[], int tam);
int hardcodearMarca(eMarca array[]);
void listarUnaMarca(eMarca marca);
void listarMarcas(eMarca lista[], int tam);
