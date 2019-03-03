#include <stdio.h>
#include "matrix_mul.h"

int matrix_mul(int *o, int *a, int *b, int n1, int n2, int n3);

int main(){
	int m1[2][3] = {1,2,3,4,5,6};
	int m2[3][2] = {7,8,9,10,11,12};
	int o[2][2];
	
	matrix_mul(*o, *m1, *m2, 2, 3, 2);
	
	int i,j;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf ("%d ", o[i][j]);
		}
		printf ("\n");
	}
	return 0;
}
