#include<iostream>
int main()
{
	int num[3][3];
	for (int  i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &num[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%4d", num[j][i]);
		}
		printf("\n");
	}
}