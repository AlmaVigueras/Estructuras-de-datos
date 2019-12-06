typedef char TipoDatoA;

typedef struct nodo{
	TipoDatoA dato;
	struct nodo *izq, *der;
}ElemArbol;

typedef ElemArbol *ARBIN;
ARBIN crearNodo(TipoDatoA x);
void nuevoArbol(ARBIN *raiz, ARBIN izq, ARBIN der, TipoDatoA x);
int profundidad(ARBIN raiz);
void postOrden(ARBIN raiz);
void preOrden(ARBIN raiz);
void inOrden(ARBIN raiz);
