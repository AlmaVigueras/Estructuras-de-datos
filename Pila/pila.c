#include "pila.h"
#include <stdlib.h>
#include <stdio.h> 
struct Pila *crearNodo(struct Pila *pi, elem da){
	struct Pila *nuevo=(struct Pila *)malloc(sizeof(struct Pila));
	nuevo->dato=da;
	nuevo->sig=pi;
	return nuevo;
}

void insertarP(struct Pila **pi, elem da){
	struct Pila *nuevo=crearNodo(nuevo, da);
	nuevo->sig=*pi;
	*pi=nuevo;
}
void imprimirP(struct Pila *pi){
	struct Pila *aux;
	for(aux=pi; aux!=NULL; aux=aux->sig){
		printf("%d",aux->dato);
	}
}

void eliminarPila(struct Pila **cab, elem e){
	struct Pila *ant, *actual=*cab;
	int bandera=0;
	while(actual && bamdera==0){
		bandera=(actual->dato==e);
		if(bandera==0){
			ant=actual;
			actual=actual->sig;
		}
	}
	if(actual!=NULL){
		if(actual==*cab)
			*cab=actual->sig;
		else
			ant->sig=actual->sig;
		free(actual);
	}
}

elem sacarP(struct PIla **pi){
	elem aux=(*pi)->dato;
	eliminarPila(pi, aux);
	return aux;
}
