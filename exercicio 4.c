#include <stdlib.h>
#include "matrixlib.h"

void main(){
	int mat[100][100], lin, cols, qtd, num;
	printf("Numero de Linhas e Colunas da matriz:");
	scanf("%d%d", &lin, &cols);
	geraMatrix(mat, lin ,cols);
	printf("Insira um numero:");
	scanf("%d", &num);
	printMatrix(mat, lin, cols);
	qtd = contaMatrix(mat, lin, cols, num);
	printf("\n O numero %d aparece na matriz %d vez(es).", num ,qtd);
}
