#include <stdlib.h>
#include "matrixlib.h"

void main(){
	int mat[100][100], lin, cols, x, cont=0
	
	printf("Quantidade de Linhas e Colunas da Matriz: \n");
	scanf("%d%d",&lin,&cols);
	geraMatrix(mat, lin, cols);
	printf("Digite um numero:");
	scanf("%d"&x);
	
	for(int i=0;i<lin;i++){
		for(int j=0;j<cols;j++){
			if(mat[i][j]>x){
				cont++
			}//fim if
		}//fim for j
	}//fim for i
	printf("Existe %d numero maior que %d na Matriz. \n\n",cont,x);
	printMatrix(mat, lin, cols);
}
