#include<iostream>
void minvert(int(*martix)[5])
{
	int tmp;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i==j)
			{
				break;
			}
			else
			{
				tmp = *(*(martix + i) + j);
				*(*(martix + i) + j) = *(*(martix + j) + i);
				*(*(martix + j) + i) = tmp;
			}
		}
	}
}
int main()
{
	int data[5][5] = { {1,2,3,4,5},{12,21,12,23,12},{364,325,52312,4523,14},{2384,3425,1325,52,523},{142,124,124,124,124} };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%-6d", data[i][j]);
		}
		printf("\n");
	}
	printf("\n\n\n\n");
	minvert(&data[0]);
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%-6d", data[i][j]);
		}
		printf("\n");
	}
}