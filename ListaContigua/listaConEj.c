#include "listaCon.c"
int main(){
	struct listaCon *l=crearListaCon();
	ingresarLCon(&l, 1);
	ingresarLCon(&l, 9);
	ingresarLCon(&l, 3);
	ingresarLCon(&l, 2);
	mostrarCon(l);
	eliminarCon(&l, 9);
	mostrarCon(l);

}
