#include "cadena.h"
#include <stdlib.h>
#include <string.h>

struct cadena{
    char *str;
    size_t largo;
};


cadena_t *cadena_crear(const char *s){
    int len = strlen(s);
    cadena_t *str = malloc (sizeof(cadena_t) + len);
    if (str == NULL) return NULL;
    str->str = s;
    str->largo = len;

    return str;
}

void cadena_destruir(cadena_t *s){
    free(s->str);
    free(s);
}

cadena_t *cadena_copiar(cadena_t *s1, const cadena_t *s2){
    if(s1->largo < s2->largo){
        cadena_t *aux = realloc(s1, sizeof(cadena_t) + s2->largo);
        if (aux == NULL) return NULL;
        
        s1 = aux;
        char str[s2->largo];
        strcpy(str, s2);
        strcpy(s1->str, str);
        s1->largo = s2->largo;
        return s1;

    }
    strcpy(s1->str, s2->str);
    s1->largo = strlen(s2);
    return s1;
}

cadena_t *cadena_clonar(const cadena_t *s){
    cadena_t *clon = malloc(sizeof(s));
    strcpy(clon->str, s->str);
    clon->largo = s->largo;
    return clon; 
}
cadena_t *cadena_concatenar(cadena_t *s1, const cadena_t *s2){
    cadena_t *str = malloc(sizeof(cadena_t) + s1->largo + s2->largo);
    strcat(str, s1);
    strcat(str, s2);
    str->largo = s1->largo + s2->largo;
    return str;
}
cadena_t *cadena_strcpy(cadena_t *s1, const char *s2);
cadena_t *cadena_strcat(cadena_t *s1, const char *s2);