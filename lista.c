#include <stdio.h>
#include <stdlib.h>

#include "lista.h"


/**
 Inicializa una lista vacia.
 Una referencia a la lista creada es referenciada en *L.
**/
void crear_lista(tLista * l) {
    *l= (tLista)malloc(sizeof(struct celda));
    if(!l){
        exit(LST_ERROR_MEMORIA);
    }
    (*l)->siguiente= NULL;
    (*l)->elemento= NULL;
}

/**
 Inserta el elemento E, en la posicion P, en L.
 Con L = A,B,C,D y la posicion P direccionando C, luego:
 L' = A,B,E,C,D
**/
void l_insertar(tLista l, tPosicion p, tElemento e) {
    tPosicion nuevo;

    nuevo=(tPosicion)malloc(sizeof(struct celda));
    nuevo->siguiente= p->siguiente;
    nuevo->elemento= e;
    p->siguiente= nuevo;
}
/**
 Recupera y retorna el elemento en la posicion P.
 Si P es fin(L), finaliza indicando LST_POSICION_INVALIDA.
**/
tElemento l_recuperar(tLista l, tPosicion p){
    if(p==NULL)
        exit(LST_POSICION_INVALIDA);
    return p->siguiente->elemento;
}
/**
 Recupera y retorna la primera posicion de L.
 Si L es vacia, primera(L) = ultima(L) = fin(L).
**/
 tPosicion l_primera(tLista l){
     return l;
 }

/**
 Recupera y retorna la posicion siguiente a P en L.
 Si P es fin(L), finaliza indicando LST_NO_EXISTE_SIGUIENTE.
**/
 tPosicion l_siguiente(tLista l, tPosicion p){
    if((p->siguiente)==NULL){
        exit(LST_NO_EXISTE_SIGUIENTE);
    }
    return (p->siguiente);}

/**
 Recupera y retorna la posicion anterior a P en L.
 Si P es primera(L), finaliza indicando LST_NO_EXISTE_ANTERIOR.
**/
 tPosicion l_anterior(tLista l, tPosicion p){
     if(p == l)
        exit(LST_NO_EXISTE_ANTERIOR);
    tPosicion aux=l;

    while(aux!=p&&aux->siguiente!=NULL)
        aux=aux->siguiente;

    return aux;
 }

 /**
 Recupera y retorna la ultima posicion de L.
 Si L es vacia, primera(L) = ultima(L) = fin(L).
**/
 tPosicion l_ultima(tLista l);

 /**
 Recupera y retorna la posicion fin de L.
 Si L es vacia, primera(L) = ultima(L) = fin(L).
**/
 tPosicion l_fin(tLista l);

