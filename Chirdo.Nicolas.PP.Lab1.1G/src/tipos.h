/*
 * tipos.h
 *
 *  Created on: 23 oct. 2022
 *      Author: Nicolas
 */

#ifndef TIPOS_H_
#define TIPOS_H_

typedef struct{
	 int id;
	 char descripcion[21];
 }eTipo;


#endif /* TIPOS_H_ */

int harcodearTipos(eTipo array[]);
void listarUnTipo(eTipo marca);
void listarTipos(eTipo lista[], int tam);
