#include <stdio.h>
#include <stdlib.h>

typedef enum{
    A,
    B,
    C,
    D,
    E,
    F, 
    G,
    H,
    I, 
}velocidad_t;

const int velocidades[] ={
    [A] = 9600,     // 9600 * 1
    [B] = 19200,    //9600 * 2
    [C] = 34800,     //9600 * 4
    [D] = 56700,    //9600 * 6
    [E] = 115200,   //9600 * 12
    [F] = 230400,   //9600 * 24
    [G] = 460800,   //9600 * 48
    [H] = 500000,   //9600 * 52.083333
    [I] = 921600    //9600 * 96
 };

int main(void){
    char aux[100];
    fgets(aux, 100, stdin);
    int baudrate = atoi(aux);
    int vel = 0;

    switch (baudrate){
    case A:  vel = velocidades[A];  
             printf("%d baudios\n", vel);
             break;
    case B:  vel = velocidades[B];  
             printf("%d baudios\n", vel);
             break;
    
    case C:  vel = velocidades[C];  
             printf("%d baudios\n", vel);
             break;
    
    case D:  vel = velocidades[D];  
             printf("%d baudios\n", vel);
             break;
    
    case E:  vel = velocidades[E];  
             printf("%d baudios\n", vel);
             break;
    
    case F:  vel = velocidades[F];  
             printf("%d baudios\n", vel);
             break;
    
    case G:  vel = velocidades[G];  
             printf("%d baudios\n", vel);
             break;
    
    case H:  vel = velocidades[H];  
             printf("%d baudios\n", vel);
             break;
    
    case I:  vel = velocidades[I];
                        printf("%d baudios\n", vel);
                        break;

    default:
        printf("la velocidad maxima es 921600 baudios\n");
        break;
    }

    return 0;
}

