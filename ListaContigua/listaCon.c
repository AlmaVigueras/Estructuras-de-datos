#include "listaCon.h"
#include<stdio.h>
#include<stdlib.h>

struct listaCon *crearListaCon(){
	struct listaCon *l=(struct listaCon*)malloc(sizeof(struct listaCon));
	l->tope=-1;
	return l;
}


void ingresarLCon(struct listaCon **l, elem dato){
	if((*l)->tope<100){
		(*l)->tope++;
		(*l)->listaCon[(*l)->tope]=dato;
	}
	else
		printf("La lista esta llena\n");
}
void mostrarCon(struct listaCon *l){
	int i;
	for(i=0; i<=l->tope; i++)
		printf("%d\n", l->listaCon[i]);
}
int buscarCon(struct listaCon *l, elem dato){
	int i;
	for(i=0; i<l->tope; i++)
		if(l->listaCon[i]==dato)
			return i;
	printf("No se encontro dicho dato\n");
	return -1;
}
void eliminarCon(struct listaCon **l, elem dato){
	int i=0, bandera=0;
	i=buscarCon(*l, dato);
	if(i!=-1){
		if(i==(*l)->tope)
			(*l)->tope--;
		else{
			while(i<=(*l)->tope){
				(*l)->listaCon[i]=(*l)->listaCon[i+1];
				i++;
			}
			(*l)->tope--;
		}

	}
}
