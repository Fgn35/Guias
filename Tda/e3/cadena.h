#ifndef CADENA_H
#define CADENA_H

struct cadena;
typedef struct cadena cadena_t;

cadena_t * cadena_crear(const char *);
void cadena_destruir(cadena_t *);
cadena_t * cadena_copiar(cadena_t *, const cadena_t *);
cadena_t * cadena_clonar(const cadena_t *);
cadena_t * cadena_concatenar(cadena_t *, const cadena_t *);
cadena_t * cadena_strcpy(cadena_t *, const char *);
cadena_t * cadena_strcat(cadena_t *, const char *);

#endif