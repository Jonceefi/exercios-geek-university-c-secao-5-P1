#include<stdio.h>

int main(){

	int i,j,matriz[5][5],valor,encontraL,encontraC,s;
	printf("Digite os valores para matriz");
	fflush(stdout);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&matriz[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("[%d]",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Digite um Valor para buscar");
	fflush(stdout);
	scanf("%d",&valor);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(valor == matriz[i][j])
			{
				encontraL = i;
				encontraC = j;
				s = 1;

			}
		}
	}
	if(s == 1)
	{
		printf("O valor [%d] foi encontradado na linha [%d] coluna [%d]", valor,encontraL,encontraC);
	}
	else
	{
		printf("O valor [%d] não foi encontrado.", valor);
	}

	return 0;
}
