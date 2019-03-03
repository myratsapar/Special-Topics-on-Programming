#include <stdio.h>
#include <stdlib.h>
#include "m_add.h"

void m_add(int a[2][2], int b[2][2]){
	int c[2][2];
	int i, j;
	
	for (i=0; i<2; i++){
		for(j=0; j<2; j++){
			c[i][j] = a[i][j] + b[i][j]; //su satiri ayrip print fonks yapabilirsin
			printf ("%d	", c[i][j]);
		}
		printf("\n");
	}
}
