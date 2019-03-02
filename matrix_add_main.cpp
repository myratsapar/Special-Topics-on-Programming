#include <stdio.h>
#include <stdlib.h>
#include "matrix_add.h"

int matrix_add(int *o, int *a, int *b, int satir, int sutun);

int main(){
	
	int m1[2][2] = {1,2,3,4};
	int m2[2][2] = {1,2,3,4};
	int o[2][2];
	
	matrix_add(*o, *m1, *m2, 2, 2);
	int i, j;
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d ", o[i][j]);
		}
		printf("\n");
	}
	return 0;
}
