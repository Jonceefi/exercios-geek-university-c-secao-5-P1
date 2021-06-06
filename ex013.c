#include<stdio.h>



int main(){

	int i,j,aux,matriz[4][4];
	printf("Digite os valores para Matriz M:\n");
	fflush(stdout);
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&matriz[i][j]);
		}
	}
	printf("\nMatriz original:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("[%d]",matriz[i][j]);
		}
		printf("\n");
	}

	printf("\nMatriz triangular superior:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(j == i || j < i)
			{
				aux = matriz[i][j];
				matriz[i][j] = 0;
				printf("[%d]",matriz[i][j]);
				matriz[i][j] = aux;
			}
			else
			{
				printf("[%d]",matriz[i][j]);
			}
		}
		printf("\n");
	}
	printf("\nMatriz triangular inferior:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(j == i || j > i)
			{
				aux = matriz[i][j];
				matriz[i][j] = 0;
				printf("[%d]",matriz[i][j]);
				matriz[i][j] = aux;
			}
			else
			{
				printf("[%d]",matriz[i][j]);
			}
			printf("\n");
		}

	}
	return 0;
}
