typedef int elem;
struct listaC{
	elem dato;
	struct listaC *sig;
};
void insertarC(struct listaC **l, elem dato);
void mostrar (struct listaC *l);


