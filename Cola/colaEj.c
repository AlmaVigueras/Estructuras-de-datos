#include "cola.c"
int main(){
	Cola *c=crearCola();
	ingresarC(&c, 2);
	ingresarC(&c, 3);
	ingresarC(&c, 4);
	mostrarC(c);
	eliminarC(&c, 3);
	mostrarC(c);
}
