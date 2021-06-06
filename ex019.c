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
				printf("\nDigite o número da matrícula:");
				fflush(stdout);
				scanf("%f",&matriz[i][j]);
			}
			else if(j == 1)
			{
				printf("\nDigite a média das provas:");
				fflush(stdout);
				scanf("%f",&matriz[i][j]);
				mp = matriz[i][j];
			}
			else if(j == 2)
			{
				printf("\nDigite a média dos trabalhos: ");
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
					printf("Número da matricula: %.0f ",matriz[i][j]);
				}
				else if(j == 1)
				{
					printf("Média das provas: %.2f ",matriz[i][j]);
				}
				else if(j == 2)
				{
					printf("Media dos trabalhos: %.2f ",matriz[i][j]);
				}
			    else if(j == 3)
				{
			    	printf("Média aritimética: %.2f ",matriz[i][j]);
				}
			}
			printf("\n");
		}
	printf("\nO aluno inscrito na matricula: %.0f obteve a maior média %.2f\nA média da turma foi %.2f",pos,media,tot);

	return 0;
}
