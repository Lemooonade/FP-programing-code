#include<iostream>
int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			if (j < i)
			{
				printf("                ");
			}
			else 
			{
				printf("%d * %d = %d\t", i, j, (i * j));
			}
		}
		printf("\n");
	}
	return 0;
}