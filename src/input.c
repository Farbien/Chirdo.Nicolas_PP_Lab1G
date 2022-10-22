#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "estructuras.h"
#include "input.h"


float validarFloat(float precio, char error[], int min){
	while(precio <= min)
		{
			printf("%s",error);
			scanf("%f", &precio);
		}

	return precio;
}

int validarInt(int num, char error[], int min, int max){
	while( num > max || num < min)
		{
			printf("%s",error);
			scanf("%d", &num);
		}
	return num;
}

int validarChar(char texto[], int tam){
	int ok;

	if(strlen(texto) > tam)
	{
		ok = 0;
	}
	else{
		ok = 1;
	}

	return ok;

}

int getInt(char texto[], char error[], int min, int max){
	int id;

	printf("%s", texto);
	scanf("%d", &id);

	id = validarInt(id ,error , min, max);

	return id;
}

float getFloat(char texto[], char error[], int min){
	float precio;

	printf("%s", texto);
	scanf("%f", &precio);

	precio = validarFloat(precio, error, min);

	return precio;
}


void getChar(char texto[],int tam, char mensaje[]){
	int ok;

	printf("%s", mensaje);
	fflush(stdin);
	scanf("%[^\n]", texto);

	ok = validarChar(texto, tam);

	if(ok == 0)
	{
		printf("\nERROR, descripc%cn demasiado larga. Reingrese una mas corta: ",162);
		fflush(stdin);
		scanf("%[^\n]", texto);
	}

}
