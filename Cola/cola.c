#include"cola.h"
#include<stdio.h>
#include<stdlib.h>

Cola *crearCola(){
	Cola *c=(Cola*)malloc(sizeof(Cola));
	c->ent=NULL;
	c->sal=NULL;
	return c;
}

void ingresarC(Cola **c, elem dato){
	ApNodo *nuevo=(ApNodo*)malloc(sizeof(ApNodo));	
	nuevo->dato=dato;
	nuevo->sig=NULL;
	if((*c)->sal==NULL && (*c)->ent==NULL){
		(*c)->sal=nuevo;
		(*c)->ent=nuevo;
	}
	else{
		(*c)->ent->sig=nuevo;
		(*c)->ent=nuevo;
	}
}

void mostrarC(Cola *c){
	ApNodo *aux;
	for(aux=c->sal; aux!=NULL; aux=aux->sig){
		printf("%d \n", aux->dato);
	}
}
ApNodo *buscarC(Cola *c, elem dato){
	ApNodo *aux;
	for(aux=c->sal; aux!=NULL; aux=aux->sig){
		if(aux->dato==dato)
			return aux;
	}
	return NULL;
}
void eliminarC (Cola **c, elem dato){
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
