#include"colaP.c"
int main(){
	ColaP *c=crearColaP();
	ingresarCPri(&c, 6, 3);
	ingresarCPri(&c, 4, 1);
	ingresarCPri(&c, 9, 2);
	mostrarC(c);
	eliminarC(&c, 4);
	mostrarC(c);
}
