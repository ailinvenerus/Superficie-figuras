/*
 * main.cpp
 *
 *  Created on: 15 de jun. de 2017
 *      Author: AILIN
 */

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <iomanip>
#include <ctype.h>
using namespace std;

float superficieCuadrado (float lado) {
	return lado*lado;
}

float superficieTriangulo (float base, float altura) {
	return base*altura/2;
}

float superficieCirculo (float radio) {
	float pi = 3.14;
	float cuadrado = radio*radio;
	return pi*cuadrado;
}

float superficieRectangulo (float base, float altura) {
	return base*altura;
}

int main(int argc, char **argv) {
	int tipoFigura;
	cout<<"Calculare la superficie de una figura. Que tipo de figura es? Escribir su numero"<<endl;
	cout<<"1 Cuadrado"<<endl;
	cout<<"2 Triangulo"<<endl;
	cout<<"3 Circulo"<<endl;
	cout<<"4 Rectangulo"<<endl;
	cin>>tipoFigura;
	//if (tipoFigura<0 || tipoFigura>4) {
		//	cout<<"Ingreso un numero incorrecto, intente nuevamente";
			//cin>>tipoFigura;
	//	}

	switch (tipoFigura) {
	case 1:
		int lado;
		cout<<"Cuanto mide el lado del cuadrado? ";
		cin>>lado;
		cout<<"Su superficie es: "<<superficieCuadrado(lado);
		break;
	case 2:
		int baseTri;
		int alturaTri;
		cout<<"Cuanto mide la base del triangulo? ";
		cin>>baseTri;
		cout<<"Y su altura? ";
		cin>>alturaTri;
		cout<<"Su superficie es: "<<superficieTriangulo(baseTri, alturaTri);
		break;
	case 3:
		int radio;
		cout<<"Cual es el radio del circulo? ";
		cin>>radio;
		cout<<"Su superficie es: "<<superficieCirculo(radio);
		break;
	case 4:
		int baseRec;
		int alturaRec;
		cout<<"Cuanto mide la base del rectangulo? ";
		cin>>baseRec;
		cout<<"Y la altura? ";
		cin>>alturaRec;
		cout<<"Su superficie es: "<<superficieRectangulo(baseRec, alturaRec);
		break;
	default:
		cout<<"Un caracter invalido fue ingresado. Reinicie el programa";
		break;
	}


}


