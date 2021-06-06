#include<stdio.h>

//I = Linha;
//J = Coluna;

int main(){

	int i,j,matriz[4][4],maiorL,maiorC;
	int maior = -123456789;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&matriz[i][j]);
			fflush(stdout);
			if(matriz[i][j] > maior)
			{
				maiorC= i;
				maiorL= j;
				maior = matriz[i][j];
			}
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("[%d]",matriz[i][j]);
		}
		printf("\n");
	}
	printf("O maior valor digitado foi %d e se encontra na Linha[%d] Coluna[%d]",matriz[maiorC][maiorL],maiorC,maiorL);

	return 0;
}
