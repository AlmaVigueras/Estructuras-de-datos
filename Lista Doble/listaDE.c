#include "listaDE.h"
#include <stdlib.h>
#include <stdio.h>

void insertarCabLDE(struct listaDE **l, elem dato){
	struct listaDE *nuevo=(struct listaDE*)malloc(sizeof(struct listaDE));
	nuevo->dato=dato;
	nuevo->sig=*l;
	nuevo->ant=NULL;
	if(*l)
		(*l)->ant=nuevo;
	*l=nuevo;
}

void mostrarCabLDE(struct listaDE *l){
	struct listaDE *aux;
	for(aux=l; aux!=NULL; aux=aux->sig){
		printf("%c \n",aux->dato);
	}
}
struct listaDE *buscar(struct listaDE *l, elem dato){
	struct listaDE *aux;
	for (aux=l; aux!=NULL; aux=aux->sig){
		if(aux->dato==dato)
			return aux;
	}
	return NULL;
}
void eliminarLDE(struct listaDE **l, elem dato){
	struct listaDE *actual=buscar(*l, dato);
	if(actual!=NULL){
		if(actual==*l){
			*l=actual->sig;
			if(actual->sig!=NULL)
				actual->sig->ant=NULL;
		}
		else if(actual->sig!=NULL){
			actual->sig->ant=actual->ant;
			actual->ant->sig=actual->sig;
		}
		else
			actual->ant->sig=NULL;
		free(actual);
	}
}
