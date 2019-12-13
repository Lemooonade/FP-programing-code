#include<iostream>
int main()
{
	int a[5][5],tmp[5];
	float a1[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%-3d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int j = 0; j < 5; j++)
	{
		tmp[j] = a[4][j];
		a[4][j] = a[1][j];
		a[1][j] = tmp[j];
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%-3d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			a1[i][j] = (float)a[i][4-i] / a[i][j];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%-5.2f", a1[i][j]);
		}
		printf("\n");
	}
}