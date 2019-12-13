#include<iostream>
int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = i; j <= 9; j++)
		{
			printf("%d * %d= %d",i,j,j * i);
			if (j * i >= 10)
			{
				printf("   ");
			}
			else
			{
				printf("    ");
			}
		}
		printf("\n");
	}
}