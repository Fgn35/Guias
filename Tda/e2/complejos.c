#include "comp.h"
#include <stdlib.h>
#include <math.h>

struct complejo{
    double im;
    double real;
};

complejo_t *complejo_crear(double im, double real){
    complejo_t *z = malloc(sizeof(complejo_t));
    if(z == NULL) return NULL;
    z->im = im;
    z->real = real;
    return z;
}

void complejo_destruir(complejo_t *z){
    free(z);
}

complejo_t *complejo_copiar(complejo_t *z1, const complejo_t *z2){
    z1->im = z2->im;
    z1->real = z2->real;
    return z1; 
}

complejo_t *complejo_clonar(const complejo_t *z){
    complejo_t *clon = malloc(sizeof(complejo_t));
    if (clon == NULL) return NULL;
    clon->im=z->im;
    clon->real = z->real;
    return clon;
}

double complejo_get_real(const complejo_t *z){
    return z->real;
}

double complejo_get_imag(const complejo_t *z){
    return z->im;
}

double complejo_set_real(complejo_t *z, double real){
    z->real = real;
    return real;
}

double complejo_set_imag(complejo_t *z, double im){
    z->im = im;
    return im;
}

complejo_t *complejo_conjugar(complejo_t *z){
    z->im = -z->im;
    return z;
}

int main(int argc, char const *argv[])
{
 
    return 0;
}


