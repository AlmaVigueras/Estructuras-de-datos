typedef int elem;

typedef struct NODO{
	elem dato;
	struct NODO *sig;
}ApNodo;
typedef struct CNODO{
	ApNodo *sal;
	ApNodo *ent;
}Cola;

Cola *crearCola();
void ingresarC(Cola **C, elem dato);
void mostrarC(Cola *c);
ApNodo *buscarC(Cola *c, elem dato);
void eliminar (Cola **c, elem dato);
