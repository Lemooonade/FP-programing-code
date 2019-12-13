#include<iostream>
int main()
{
	int b[5];
	int max;
	scanf("%d%d%d%d%d", &b[0], &b[1], &b[2], &b[3], &b[4]);
	if (b[0] > b[1])
	{
		max = b[0];
	}
	else
	{
		max = b[1];
	}
	for (int i = 0; i < 5; i++)
	{
		if (max < b[i + 1])
		{
			max = b[i + 1];
		}
	}
	printf("%d", max);
}