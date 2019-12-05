typedef int elem;
struct Lista{
	elem dato;
	struct Lista *siguiente;
};

struct Lista *CrearNodo(struct Lista *lista, elem e);
void insertar(struct Lista **lista, elem e);
void imprimir(struct Lista *lista);
void eliminar(struct Lista **eli, elem e);
void insertarL(struct Lista *li, elem e);
