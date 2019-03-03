#include <stdio.h>
#include "matrix_sub.h"

int matrix_sub(int *, int *a, int *b, int satir, int sutun);

int main(){
	int m1[2][3] = {1,2,3,4,5,6};
	int m2[2][3] = {3,2,1,4,5,6};
	int o[2][3];
	
	matrix_sub(*o, *m1, *m2, 2, 3);
	
	int i, j;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf ("%d ", o[i][j]);
		}
		printf ("\n");
	}
	return 0;
}
