#ifndef VEC2_H
#define VEC2_H   

struct punto;
typedef struct punto punto_t;

punto_t *punto_crear(double, double);
void punto_destruir(punto_t *);
punto_t *punto_copiar(punto_t *, const punto_t *);
punto_t *punto_clonar(const punto_t *);
double punto_get_x(const punto_t *);
double punto_get_y(const punto_t *);
double punto_set_x(punto_t *, double);
double punto_set_y(punto_t *, double);
punto_t *punto_sumar(punto_t *, const punto_t *);
punto_t *punto_restar(punto_t *, const punto_t *);
double punto_distancia(punto_t *, const punto_t *);
double punto_norma(const punto_t *);

#endif