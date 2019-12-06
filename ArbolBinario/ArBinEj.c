#include "Arbin.c"

int main(){
	ARBIN raiz, der, izq;
	der=crearNodo('a');
	izq=crearNodo('c');
	nuevoArbol(&raiz, der, izq, 'a');
	preOrden(raiz);
	printf("\n");
	postOrden(raiz);
	printf("\n");
	inOrden(raiz);
}
