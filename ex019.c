#include <stdio.h>

int main()
{

	int i,j;
	float matriz[5][4],mp,mt,tot,media,pos;
	media = 0;
	tot = 0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			if(j == 0)
			{
				printf("\nDigite o n�mero da matr�cula:");
				fflush(stdout);
				scanf("%f",&matriz[i][j]);
			}
			else if(j == 1)
			{
				printf("\nDigite a m�dia das provas:");
				fflush(stdout);
				scanf("%f",&matriz[i][j]);
				mp = matriz[i][j];
			}
			else if(j == 2)
			{
				printf("\nDigite a m�dia dos trabalhos: ");
				fflush(stdout);
				scanf("%f",&matriz[i][j]);
				mt = matriz[i][j];
			}
			else if(j == 3)
			{
				matriz[i][j] = (mp+mt)/2;
				tot = tot + matriz[i][j];
				if(matriz[i][j] > media)
				{
					media = matriz[i][j];
					pos = matriz[i][0];
				}
			}
		}
		mt = 0;
		mp = 0;
	}
	printf("\n");
	for(i=0;i<5;i++)
		{
			printf("Aluno [%d]",i+1);
			for(j=0;j<4;j++)
			{
				if(j == 0)
				{
					printf("N�mero da matricula: %.0f ",matriz[i][j]);
				}
				else if(j == 1)
				{
					printf("M�dia das provas: %.2f ",matriz[i][j]);
				}
				else if(j == 2)
				{
					printf("Media dos trabalhos: %.2f ",matriz[i][j]);
				}
			    else if(j == 3)
				{
			    	printf("M�dia aritim�tica: %.2f ",matriz[i][j]);
				}
			}
			printf("\n");
		}
	printf("\nO aluno inscrito na matricula: %.0f obteve a maior m�dia %.2f\nA m�dia da turma foi %.2f",pos,media,tot);

	return 0;
}
