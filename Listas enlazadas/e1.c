#include <stdlib.h>
#include <stdbool.h>

struct nodo{
    void *dato;
    struct nodo *next;
};

typedef struct lista{
    struct nodo *prim;
}lista_t;

lista_t *lista_crear(){
    /*lista_t *l = malloc(sizeof(lista_t));
    l->prim->next = NULL;
    return l;*/
    return calloc(1, sizeof(lista_t));
}

void lista_destruir(lista_t *l, void (*destruir_dato)(void *dato)){
    struct nodo *act = l->prim; 
    while (act != NULL){
        struct nodo *sig = act->next;
        if(destruir_dato != NULL)
            destruir_dato(act->dato);
        free(act);
        
        act = sig;        
    }
}

bool lista_es_vacia(const lista_t *l){
    return l->prim == NULL;
}

bool lista_insertar_comienzo(lista_t *l, void *dato){
    struct nodo *nuevo = malloc(sizeof(struct nodo));
    if(nuevo == NULL) return false;
    nuevo->dato = dato;
    nuevo->next = l->prim;
    l->prim = nuevo;
    return true;  
}


bool lista_insertar_final(lista_t *l, void *dato){
    struct nodo *nuevo = malloc(sizeof(struct nodo));
    if(nuevo == NULL) return false;
    struct nodo *act = l->prim;
    while (act->next != NULL){
        act = act->next;
    }
}

void *lista_extraer_primero(lista_t *l){

}
void *lista_extraer_ultimo(lista_t *l){

}
void *lista_buscar(const lista_t *l, const void *dato, int (*cmp)(const void *a, const void *b)){

}

void *lista_borrar(lista_t *l, const void *dato, int (*cmp)(const void *a, const void *b)){

}

void lista_recorrer(const lista_t *l, bool (*visitar)(void *dato, void *extra), void *extra){

}

