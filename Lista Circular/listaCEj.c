#include "listaC.c"
int main(){
	struct listaC *l=NULL;
	insertarC(&l, 4);
	insertarC(&l, 9);
	mostrarC(l);
	eliminarC(&l,4);
	mostrarC(l);
}
