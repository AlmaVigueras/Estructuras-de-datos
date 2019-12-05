typedef int elem;

struct listaCon{
	elem listaCon[100];
	int tope;
};
struct listaCon *crearListaCon();
void ingresarLCon(struct listaCon **l, elem dato);
void mostrarCon(struct listaCon *l);
int buscarCon(struct listaCon *l, elem dato);
void eliminarCon(struct listaCon **l, elem dato);
