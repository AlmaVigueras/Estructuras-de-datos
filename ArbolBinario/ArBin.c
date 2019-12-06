#include "Arbin.h"
#include<stdlib.h>
#include<stdio.h>
typedef ElemArbol *ARBIN;

ARBIN crearNodo(TipoDatoA x){
	ARBIN nuevo=(ARBIN)malloc(sizeof(ElemArbol));
	nuevo->dato=x;
	nuevo->der=nuevo->izq=NULL;
	return nuevo;
}

void nuevoArbol(ARBIN *raiz, ARBIN izq, ARBIN der, TipoDatoA x){
	*raiz=crearNodo(x);
	(*raiz)->izq=izq;
	(*raiz)->der=der;
}

int profundidad(ARBIN raiz){
	if(!raiz)
		return 0;
	else{
		int profI=profundidad(raiz->izq);
		int profD=profundidad(raiz->der);
		if(profI>profD)
			return profI+1;
		else 
			return profD+1;
	}
}
void postOrden(ARBIN raiz){
	if(raiz!=NULL){
		postOrden(raiz->izq);
		postOrden(raiz->der);
		printf("%c", raiz->dato);
	}
}
void preOrden(ARBIN raiz){
	if(raiz!=NULL){
		printf("%c", raiz->dato);
		preOrden(raiz->izq);
		preOrden(raiz->der);
	}
}
void inOrden(ARBIN raiz){
	if(raiz!=NULL){
		inOrden(raiz->izq);
		printf("%c", raiz->dato);
		inOrden(raiz->der);
	}
}
