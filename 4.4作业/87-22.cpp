#include<iostream>
int main()
{
	bool n = 1;
	for (int i = 1; i <=100; i++)
	{
		n = 1;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
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
			printf("%d\n", i);
		}
	}
}