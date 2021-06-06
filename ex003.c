#include<stdio.h>

int main(){

	int i,j,matriz[4][4],produto;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			produto = i*j;
			matriz[i][j] = produto;
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

	return 0;
}
