#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{	int i, j;

	int A[3][3]={
		{2, 3, 0},
		{8, 9, 1},
		{7, 0, 5}};
	int B[3][3]={
		{1, 0, 0},
		{0, 1, 0},
		{0, 0, 1}};
		
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			
			int C[3][3];
			
			C[i][j] = A[i][j] + B[i][j];
			
			printf("%d\t", C[i][j]);
		}
		printf("\n");
	}
	
	return 0;
			
}

