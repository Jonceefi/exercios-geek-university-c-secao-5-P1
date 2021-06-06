#include<stdio.h>

int main()
{
	int i,j,op;
	float mat1[2][2],mat2[2][2],soma[2][2],sub[2][2];
	printf("Valores para matriz 1:\n");
	fflush(stdout);
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%f",&mat1[i][j]);
		}
	}
	printf("\nValores para matriz 2:\n");
	fflush(stdout);
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%f",&mat2[i][j]);
		}
	}
	printf("==============MENU==============\n");
	printf("1 - Somar as duas Matrizes\n");
	printf("2 - Subtrair a 1 da 2\n");
	printf("3 - xxxxx-xxxxx-xxxxx-xxxx\n");
	printf("4 - Imprimir as matrizes\n");
	fflush(stdout);
	scanf("%d",&op);
	switch (op) {
			case 1:
				for(i=0;i<2;i++)
				{
					for(j=0;j<2;j++)
					{
						soma[i][j] = mat1[i][j] + mat2[i][j];
					}
				}
				printf("Soma da Matriz 1 e da Matriz 2\n");
				for(i=0;i<2;i++)
				{
					for(j=0;j<2;j++)
					{
						printf("[%.1f]",soma[i][j]);
					}
					printf("\n");
				}
				break;
			case 2:
				for(i=0;i<2;i++)
				{
					for(j=0;j<2;j++)
					{
						sub[i][j] = mat2[i][j] - mat1[i][j];
					}
				}
				printf("Subtração da Matriz 1 na Matriz 2\n");
				for(i=0;i<2;i++)
				{
					for(j=0;j<2;j++)
					{
						printf("[%.1f]",sub[i][j]);
					}
					printf("\n");
				}
				break;
			case 3:
				printf("!!!Função não disponível!!!");
				break;
			case 4:
				printf("Matriz 1:\n");
				for(i=0;i<2;i++)
				{
					for(j=0;j<2;j++)
					{
						printf("[%.1f]",mat1[i][j]);
					}
					printf("\n");
				}
				printf("Matriz 2:\n");
				for(i=0;i<2;i++)
				{
					for(j=0;j<2;j++)
					{
						printf("[%.1f]",mat2[i][j]);
					}
					printf("\n");
				}
			break;
			default:
				printf("Valor indisponível tente outro:");
				break;
			}


	return 0;
}
