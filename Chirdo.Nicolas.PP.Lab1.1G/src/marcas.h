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
 }eMarca;

#endif /* MARCAS_H_ */

int harcodearMarca(eMarca array[]);
void listarUnaMarca(eMarca marca);
void listarMarcas(eMarca lista[], int tam);
