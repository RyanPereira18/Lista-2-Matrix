#include <stdlib.h>
#include "matrixlib.h"

void multiplicaEscalar(int m[][100], int ordem, int mult){
	for(int i = 0; i < ordem; i++){
		for(int j = 0; j < ordem; j++){
			m[i][j] = m[i][j] * mult;
		}//fim for j
	}//fim for i
}

void main(){
	
	int mat[100][100], mult, ordem;
	printf("Entre com a ordem da matriz: ");
	scanf("%d", &ordem);
	geraMatrix(mat, ordem, ordem);
	printf("Entre com o multiplicador escalar da matriz: ");
	scanf("%d", &mult);
	printMatrix(mat, ordem, ordem);
	printf("\n");
	multiplicaEscalar(mat, ordem, mult);
	printf("Matriz multiplicada: \n");
	printMatrix(mat, ordem, ordem);
	
}
