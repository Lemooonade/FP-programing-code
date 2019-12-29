#include<iostream>
int main()
{
	int num[11];
	int tmp;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}
	for (int j = 0; j < 9; j++)
	{
		for (int i = 0; i < 9; i++)
		{
			if (num[i] < num[i + 1])
			{
				tmp = num[i];
				num[i] = num[i + 1];
				num[i + 1] = tmp;
			}
		}
	}
	for (int k = 0; k < 10; k++)
	{
		printf("%d ", num[k]);
	}
}