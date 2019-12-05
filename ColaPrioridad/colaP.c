#include "colaP.h"
#include<stdio.h>
#include<stdlib.h>

ColaP *crearColaP(){
	ColaP *c=(ColaP*)malloc(sizeof(ColaP));
	c->ent=NULL;
	c->sal=NULL;
	return c;
}

void ingresarCPri(ColaP **c, elem dato, int pri){
	ApNodo *nuevo=(ApNodo*)malloc(sizeof(ApNodo));
	ApNodo *aux=(*c)->sal;
	int bandera=0;
	nuevo->dato=dato;
	nuevo->pri=pri;
	nuevo->sig=NULL;
	if((*c)->ent==NULL && (*c)->sal==NULL){
		(*c)->ent=nuevo;
		(*c)->sal=nuevo;
	}
	else if((nuevo->pri)<(aux->pri)){
		nuevo->sig=(*c)->sal;
		(*c)->sal=nuevo;
	}
	else{
		while(aux->sig!=NULL && !bandera){
			if((nuevo->pri)<(aux->sig->pri)){
				nuevo->sig=aux->sig;
				aux->sig=nuevo;
				bandera=1;
			}
		}
		if(!bandera){
			(*c)->ent->sig=nuevo;
			(*c)->ent=nuevo;
		}
	}
}
void mostrarC(ColaP *c){
	ApNodo *aux;
	for(aux=c->sal; aux!=NULL; aux=aux->sig){
		printf("%d \n", aux->dato);
	}
}
ApNodo *buscarC(ColaP *c, elem dato){
	ApNodo *aux;
	for(aux=c->sal; aux!=NULL; aux=aux->sig){
		if(aux->dato==dato)
			return aux;
	}
	return NULL;
}
void eliminarC (ColaP **c, elem dato){
	ApNodo *aux1=(*c)->sal, *aux2;
	int bandera=0;
	while (aux1!=NULL && !bandera){
		bandera=(aux1->dato==dato);
		if(!bandera){
			aux2=aux1;
			aux1=aux1->sig;
		}
	}
	if (aux1!=NULL){
		if(aux1==(*c)->sal)
			(*c)->sal=(*c)->sal->sig;
	else if(aux1==(*c)->ent){
		(aux2)->sig=NULL;
		(*c)->ent=aux2;
		}
	else
		aux2->sig=aux1->sig;
	free(aux1);
	}
}
