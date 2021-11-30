#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int buscar (const char*a[], size_t n, const char*s){
    for (int i= 0; i <n; i++){
        if(!strcmp(a[i],s)){
            return i;
        }
    }
}
// Mal algoritmo por tiempo(no medido en seg sino en cant de comparaciones)
// Formalmente exite t(N) con Tamaño de arreglo de entrada y T es la cant de operaciones
//T(N) es proporcional a N
// llamamos al algoritmo algoritmo de busqueda lineal 





int main(int argc, char *argv[]){
    char *viejo = argv[2];
    char *nuevo = argv[3];
    for(int i = 1; i < argc; i++)
        printf("* %s\n", argv[i]);
    char *aux;
    while (fscanf(stdin,"%s", aux) != EOF){
        if (aux == viejo)
            fprintf(stdin,"%s", nuevo);
    }

    return 0;
}