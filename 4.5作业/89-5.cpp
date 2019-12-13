#include<iostream>
#include<time.h>
int main()
{
	bool n = 1;
	int num[20];
	srand(time(NULL));
	for (int i = 0; i < 20; i++)
	{
		num[i] = rand() % 11;
	}
	for (int i = 1; i <20; i++)
	{
		n = 1;
		for (int j = 2; j < i; j++)
		{
			if (num[i] % j == 0)
			{
				n = 0;
				break;
			}
		}
		if (n==0)
		{
			continue;
		}
		else
		{
			printf("%d\n", num[i]);
		}
	}
}