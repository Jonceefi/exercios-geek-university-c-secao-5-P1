#include<stdio.h>

int main()
{
	int i,j,aux;
	float matriz[3][6], mediaArit;
	float somaImpar = 0;
	float somaSQ = 0;

	for(i=0;i<3;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("Digite um valor:");
			fflush(stdout);
			scanf("%f",&matriz[i][j]);
		}
	}
	printf("\nMatriz:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("[%.1f]",matriz[i][j]);

		}
		printf("\n");
	}
	printf("A Soma dos elementos das colunas impares é: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<6;j++)
		{
			if(j%2 == 0 || j == 0)
			{
				somaImpar = somaImpar + matriz[i][j];
			}

		}
	}
	printf("%.1f",somaImpar);
	aux = 0;
	printf("\nMédia aritimética dos elementos da segunda e da quarta coluna: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<6;j++)
		{
			if(j == 1 || j == 3)
			{
				somaSQ = somaSQ + matriz[i][j];
				aux++;
			}
		}
	}
	mediaArit =  somaSQ/aux;
	printf("%.2f",mediaArit);
	printf("\nMatriz modificada representando na 6ta coluna a soma da 1 e da 2\n");
	aux = 0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<6;j++)
		{
			if(j == 0 || j == 1)
			{
				aux = matriz[i][j] + aux;
			}
			if(j == 5)
			{
				matriz[i][j] = aux;
			}
		}
		aux = 0;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("[%.1f]",matriz[i][j]);

		}
		printf("\n");
	}
	return 0;
}
