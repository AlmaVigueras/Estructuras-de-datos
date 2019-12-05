#include "listaC.h"
#include <stdlib.h>
#include <stdio.h>

void insertarC (struct listaC **l, elem dato){
	struct listaC *nuevo=(struct listaC*)malloc(sizeof(struct listaC));
	nuevo->dato=dato;
	nuevo->sig=nuevo;
	if(*l){
		nuevo->sig=(*l)->sig;
		(*l)->sig=nuevo;
	}
	*l=nuevo;
}
void mostrarC (struct listaC *l){
	struct listaC *aux=l;
	while (aux->sig!=l){
		printf("%d\n", aux->sig->dato);
		aux=aux->sig;
	}
	printf("%d\n", l->dato);
}
struct listaC *buscarC(struct listaC *l, elem dato){
	struct listaC *aux;
	for(aux=l; aux->sig!=l; aux=aux->sig)
		if(aux->sig->dato==dato)
			return aux->sig;
	if(aux->sig->dato==dato)
		return aux->sig;
	return NULL;
}
void eliminarC (struct listaC **l, elem dato){
	struct listaC *actual=*l;
	int encontrado=0;
	while((actual->sig)!=(*l)&&!encontrado){
		encontrado=((actual->sig->dato)==dato);
		if(!encontrado)
			actual=actual->sig;
	}
	encontrado=((actual->sig->dato)==dato);
	if(encontrado){
		struct listaC *aux=actual->sig;
		if((*l)->sig==(*l))
			*l=NULL;
		else{
			if(aux==*l)
				*l=actual;
			actual->sig=aux->sig;
		}
		free(aux);
	}
}

