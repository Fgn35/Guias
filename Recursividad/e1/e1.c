#include <stdio.h>

double suma(double z , int k){
	double r;
	if (k == 0)
		return z;
	
	if (k > 0){
		z++;
		r = suma(z, k - 1);
		return r;
	}

	if(k < 0){
		z--;
		r = suma(z, k + 1);
		return r;
	}
}

double multiplicacion(double z, int k){
	if (k == 0 || z == 0) return 0;

	if (k > 0)
		return z + multiplicacion(z, k - 1);

	if (k < 0)
		return -z + multiplicacion(z, k + 1);	}

double potencia(double z, int k){
	double r;
	if (k == 0) return 1;
	if (z == 0) return 0;
	if (z == 1) return 1;


	if (k > 0)
		return z * potencia(z, k - 1);

	if (k < 0)
		return 1/(z * potencia(z, -(k + 1)));
}

int main(int argc, char const *argv[]){
	printf("%.3f\n ", potencia(2, -3));
	return 0;
}
    
