#include<stdio.h>

int main(){

	int i,j,valor[2][2],maior;
	maior = 0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&valor[i][j]);
			if(valor[i][j] > 10)
			{
				maior++;
			}
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("[%d]",valor[i][j]);
		}
		printf("\n");
	}
	printf("A matriz possui %d valor(es) maior(es) que 10", maior);

	return 0;
}
