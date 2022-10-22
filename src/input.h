/*
 * input.h
 *
 *  Created on: 21 oct. 2022
 *      Author: Nicolas
 */

#ifndef INPUT_H_
#define INPUT_H_

int validarInt(int num, char error[], int min, int max);
float validarFloat(float precio, char error[], int min);
int validarChar(char texto[], int tam);
int getInt(char texto[], char error[], int min, int max);
void getChar(char texto[], int tam, char mensaje[]);
float getFloat(char texto[], char error[], int min);

#endif /* INPUT_H_ */
