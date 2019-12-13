#include<iostream>
int main()
{
	int n,j_s;
	scanf("%d", &n);
	for (int  i = 1; i <= n; i++)
	{
		for (int j = n-i; j>0; j--)
		{
			printf("\t");
		}
		for (int k = 1; k <= 2*i-1; k++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	j_s = 2 * (n - 1) - 1;
	for (int i = 1; i <= n-1; i++)
	{
		for (int j = i; j > 0; j--)
		{
			printf("\t");
		}
		for (int k = 1; k <= -2 * i +2+j_s; k++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}