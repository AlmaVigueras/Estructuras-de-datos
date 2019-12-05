typedef int elem;
struct Pila{
	elem dato;
	struct PIla *sig;
};

struct Pila *crearNodo(struct Pila *pi, elem da);
void insertarP(struct Pila **pi, elem da);
void imprimirP(struct Pila *pi);
void eliminarPila(struct Pila **cab, elem e);
elem sacarP(struct PIla **pi);
