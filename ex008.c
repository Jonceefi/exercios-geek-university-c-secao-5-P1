#include<stdio.h>

//[00][01][02]
//[10][11][12]
//[20][21][22]

int main(){

	int i,j,somats,somati,diagonalp,seds,diagonals,matriz[3][3];
	somats = 0;
	somati = 0;
	diagonalp = 0;
	diagonals = 0;
	printf("Digite os valores para matriz:\n");
	fflush(stdout);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&matriz[i][j]);
			seds = i+j;
			if(j > i)
			{
				somats = matriz[i][j] + somats;
			}
			else if(i > j)
			{
				somati = matriz[i][j] + somati;
			}
			else
			{
				diagonalp = matriz[i][j] + diagonalp;
			}
			if(seds == 2)
			{
				diagonals = matriz[i][j] + diagonals;
			}
		}
	}
	printf("\nMatriz:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("[%d]",matriz[i][j]);
		}
		printf("\n");
	}

	printf("\nA soma dos valores do triângulo superior é [%d];",somats);
	printf("\nA soma dos valores do triângulo inferior é [%d];",somati);
	printf("\nA soma dos valores da diagonal principal é [%d];",diagonalp);
	printf("\nA soma dos valores da diagonal secundária é [%d];",diagonals);

	printf("\nTransposta da Matriz:\n");
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			printf("[%d]",matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}
