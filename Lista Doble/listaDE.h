typedef char elem;

struct listaDE
{
	elem dato;
	struct listaDE *ant;
	struct listaDE *sig;
};
void insertarCabLDE(struct listaDE **l, elem dato);
void mostrarCabLDE(struct listaDE *l);
struct listaDE *buscar(struct listaDE *l, elem dato);
void eliminarLDE(struct listaDE **l, elem dato);
