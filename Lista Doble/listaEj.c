#include "listaDE.c"
int main(){
	struct listaDE *l=NULL;
	insertarCabLDE(&l,'a');
	insertarCabLDE(&l,'b');
	mostrarCabLDE(l);
	eliminarLDE(&l,'b');
	mostrarCabLDE(l);
	}
