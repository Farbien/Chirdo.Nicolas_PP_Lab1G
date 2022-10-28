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
	 int estado;
 }eTipo;


#endif /* TIPOS_H_ */

 int inicializaTipos(eTipo array[], int tam);
int hardcodearTipos(eTipo array[]);
void listarUnTipo(eTipo marca);
void listarTipos(eTipo lista[], int tam);
