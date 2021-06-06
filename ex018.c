#include<stdio.h>

int main()
{
	int i,j,matriz[3][3],soma[3];
	printf("Digite os valores para matriz [3]X[3]:\n");
	fflush(stdout);
	for(i=0;i<3;i++)
	{
		soma[i] = 0;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d", &matriz[i][j]);
			if(j == 0)
			{
				soma[0] = soma[0] + matriz[i][j];
			}
			else if(j == 1)
			{
				soma[1] = soma[1] + matriz[i][j];
			}
			else if(j == 2 )
			{
				soma[2] = soma[2] + matriz[i][j];
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("[%d]",matriz[i][j]);
		}
		printf("\n");
	}
	printf("Soma das colunas:\n");
	for(i=0;i<3;i++)
	{
		printf("[%d]",soma[i]);
	}
	return 0;
}
