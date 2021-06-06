#include<stdio.h>

int main(){

	int i,j,matriz[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i == j)
			{
				matriz[i][j] = 0;
			}
			else
			{
				matriz[i][j] = 1;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("[%d]",matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}
