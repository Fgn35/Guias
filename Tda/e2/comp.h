#ifndef COMP_H
#define COMP_H

struct complejo;
typedef struct complejo complejo_t;

complejo_t *complejo_crear(double, double);
void complejo_destruir(complejo_t *);
complejo_t *complejo_copiar(complejo_t *, const complejo_t *);
complejo_t *complejo_clonar(const complejo_t *);
double complejo_get_real(const complejo_t *);
double complejo_get_imag(const complejo_t *);
double complejo_set_real(complejo_t *, double);
double complejo_set_imag(complejo_t *, double);
complejo_t *complejo_conjugar(complejo_t *);

#endif