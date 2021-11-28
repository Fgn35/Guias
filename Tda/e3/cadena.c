#include "cadena.h"
#include <stdlib.h>
#include <string.h>

struct cadena{
    char *str;
    size_t largo;
};


cadena_t * cadena_crear(const char *s){
    int len = strlen(s);
    cadena_t *str = malloc (sizeof(cadena_t)+ len + 1);
    if (str == NULL) return NULL;
    str->str = s;
    str->largo = len;

    return str;
}

void cadena_destruir(cadena_t *s){
    free(s->str);
    free(s);
}

cadena_t * cadena_copiar(cadena_t *s1, const cadena_t *s2){
    
}
cadena_t * cadena_clonar(const cadena_t *);
cadena_t * cadena_concatenar(cadena_t *, const cadena_t *);
cadena_t * cadena_strcpy(cadena_t *, const char *);
cadena_t * cadena_strcat(cadena_t *, const char *);