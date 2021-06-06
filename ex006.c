#include<stdio.h>

int main(){

	int i,j,matrizM[4][4],matrizN[4][4],matrizMN[4][4];
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&matrizM[i][j]);
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&matrizN[i][j]);
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(matrizM[i][j] > matrizN[i][j])
			{
				matrizMN[i][j] = matrizM[i][j];
			}
			else if(matrizN[i][j] > matrizM[i][j])
			{
				matrizMN[i][j] = matrizN[i][j];
			}
			else
			{
				matrizMN[i][j] = matrizN[i][j];
			}

		}
	}
	printf("Matriz M:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("[%d]",matrizM[i][j]);
		}
		printf("\n");
	}
	printf("Matriz N:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("[%d]",matrizN[i][j]);
		}
		printf("\n");
	}
	printf("Matriz MN:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("[%d]",matrizMN[i][j]);
		}
		printf("\n");
	}




	return 0;
}
