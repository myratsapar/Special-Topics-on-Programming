#include <stdio.h>
#include <stdlib.h>
#include "matrix_add.h"

int matrix_add(int *o, int *a, int *b, int satir, int sutun){
	int i, j;
	
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			o[i*sutun + j] = a[i*sutun + j] + b[i*sutun + j];
		}
	}
	return 0;
}

