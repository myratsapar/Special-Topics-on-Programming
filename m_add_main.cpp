#include <stdio.h>
#include <stdlib.h>
#include "m_add.h"

void m_add(int a[2][2], int b[2][2]);

int main(){
	int a[2][2] = {1,2,3,4};
	int b[2][2] = {5,6,7,8};

	m_add(a, b);
	
	return 0;
}
