#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]){
    int min = atoi(argv[1]);
    int max = atoi(argv[2]);
    int n = atoi(argv[3]);

    for (size_t i = 0; i < n; i++){
        int r = rand() % (max-min+1) + min;        
        printf("%ld - %d\n", i+1, r);
    }
    return 0;    
}