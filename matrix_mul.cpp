#include <stdio.h>
#include "matrix_mul.h"

int matrix_mul(int *o, int *a, int *b, int n1, int n2, int n3){
	int i, j, k;
	
	for(i = 0; i < n1; i++){
		for(j = 0; j < n3; j++){
			o[i*n3+j]=0;
			for(k=0; k < n2; k++){
				o[i*n3+j] +=  a[i*n2+k] * b[k*n3+j]; 
			}
		}
	}
	return 0;
}
