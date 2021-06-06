#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*int main(void)
{
    int i;
    printf("intervalo da rand: [99,%d]\n", RAND_MAX);
    srand( (unsigned)time(NULL) );
    i = 1 + (rand()%99);
    printf("%d",i);

    return 0;
}
*/
int main(){
	int i,j,x,r,aux,bingo[5][5],repete[25];
	r = 0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			 x = 0 + (rand()%99);
			 for(aux=0;aux<r;aux++)
			 {
				while(repete[aux] == x)
				{
					x = 0 + (rand()%99);
				}

			 }
			 repete[r] = x;
			 r++;
			 bingo[i][j] = x;
		}
	}
	printf("Cartela do bingo:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("[%d]",bingo[i][j]);
		}
		printf("\n");
	}
	return 0;
}

