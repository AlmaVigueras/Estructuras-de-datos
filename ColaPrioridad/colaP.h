typedef int elem;
typedef struct NODO{
	elem dato;
	int pri;
	struct NODO *sig;
}ApNodo;

typedef struct CNODO{
	ApNodo *sal;
	ApNodo *ent;
}ColaP;

ColaP *crearColaP();
void ingresarCPri(ColaP **c, elem dato, int pri);
void mostrarC(ColaP *c);
ApNodo *buscarC(ColaP *c, elem dato);
void eliminarC (ColaP **c, elem dato);
