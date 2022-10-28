/*
 * servicios.h
 *
 *  Created on: 28 oct. 2022
 *      Author: Nicolas
 */




#ifndef SERVICIOS_H_
#define SERVICIOS_H_

typedef struct{
	 int id;
	 char descripcion[25];
	 float precio;
	 int estado;
 }eServicio;

#endif /* SERVICIOS_H_ */

 int harcodearServicios(eServicio array[]);
 int inicializarServiciosk(eServicio array[], int tam);
 void listarUnServicio(eServicio servicio);
 void listarServicios(eServicio lista[], int tam);




