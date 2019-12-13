#include<iostream>
int main()
{
	int n[100];
	n[0] = 0, n[1] = 1;
	for (int i = 2; i < 100; i++)
	{
		if ((i + 1) % 2 != 0)
		{
			n[i] = n[i - 2] + n[i - 1];
		}
		else
		{
			n[i] = n[i - 2] - n[i - 1];
		}
	}
	for (int j = 0; j < 100; j++)
	{
		printf("%d\n", n[j]);
	}
}