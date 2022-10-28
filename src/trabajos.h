/*
 * trabajo.h
 *
 *  Created on: 28 oct. 2022
 *      Author: Nicolas
 */

#include "funciones.h"

#ifndef TRABAJOS_H_
#define TRABAJOS_H_

typedef struct{
	 int id;
	 int idNotebook;
	 int idServicio;
	 eFecha fecha;
	 int estado;
 }eTrabajo;

#endif /* TRABAJOS_H_ */

 int inicializatTrabajos(eTrabajo array[], int tam);
 int hardcodearTrabajos(eTrabajo array[]);
 //int listarUnTrabajo(eTrabajo array, eNotebook arrayN[], int tamN, eServicio arrayS[], int tamS):



