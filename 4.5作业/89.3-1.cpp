#include<iostream>
int main()
{
	int num[] = {1,23,123,12,4,1,213,12,52,13,76,34,35,213,253};
	int tmp;
	for (int j = 0; j < 14; j++)
	{
		for (int i = 0; i < 14; i++)
		{
			if (num[i] < num[i + 1])
			{
				tmp = num[i];
				num[i] = num[i + 1];
				num[i + 1] = tmp;
			}
		}
	}
	for (int k = 0; k < 15; k++)
	{
		printf("%d  ", num[k]);
	}
}