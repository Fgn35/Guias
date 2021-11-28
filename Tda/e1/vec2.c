#include "vec2.h"
#include <stdlib.h>
#include <math.h> 

struct punto{
    double x;
    double y;
};

punto_t *punto_crear(double x, double y){
    punto_t *p = malloc(sizeof(punto_t));
    if(p == NULL)return NULL;
    p->x = x;
    p->y = y;
    return p;
}
void punto_destruir(punto_t *p){
    free(p);
}

//Copia en p2 en p1
punto_t *punto_copiar(punto_t *p1, const punto_t *p2){
    p1->x = p2->x;
    p1->y = p2->y;
    return p1;
}

punto_t *punto_clonar(const punto_t *p){
    punto_t *clon = malloc(sizeof(punto_t));
    if (clon == NULL)return NULL;
    clon->x = p->x;
    clon->y = p->y;
    return clon;
}
double punto_get_x(const punto_t *p){
    return p->x;
} 

double punto_get_y(const punto_t *p){
    return p->y;
}
double punto_set_x(punto_t *p, double x){
    p->x = x;
    return x;
}

double punto_set_y(punto_t *p, double y){
    p->y = y;
    return y;
}
//  Suma p2 a p1
punto_t *punto_sumar(punto_t *p1, const punto_t *p2){
    p1->x += p2->x;
    p1->y += p2->y;
    return p1;
}
// Resta p2 a p1
punto_t *punto_restar(punto_t *p1, const punto_t *p2){
    p1->x -= p2->x;
    p1->y -= p2->y;
    return p1;
}

double punto_norma(const punto_t *p){
    return (double)sqrt(p->x*p->x + p->y*p->y);
}

double punto_distancia(punto_t *p1, const punto_t *p2){
    punto_t *p3 = punto_restar(p1, p2);
    double dist = punto_norma(p3);
    return dist;
}

int main(int argc, char *argv[]){
    return 0;
}
