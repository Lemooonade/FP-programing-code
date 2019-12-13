#include<iostream>
int main()
{
	long int b[10];
	int max;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &b[i]);
	}
	if (b[0] > b[1])
	{
		max = b[0];
	}
	else
	{
		max = b[1];
	}
	for (int i = 0; i < 10; i++)
	{
		if (max< b[i + 1])
		{
			max = b[i+1];
		}
	}
	printf("Max is %d", max);
}