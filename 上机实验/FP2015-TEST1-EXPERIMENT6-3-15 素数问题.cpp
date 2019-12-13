#include<iostream>
int main()
{
	int n;
	bool s = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i == 2)
		{
			printf("%d ", i);
		}
		for (int j = 2; j < i; j++)
		{
			if (i % j != 0)
			{
				s = 1;
				continue;
			}
			else
			{
				s = 0;
				break;
			}
		}
		if (s == 1)
		{
			printf("%d ", i);
		}
		else
		{
			continue;
		}
	}
}