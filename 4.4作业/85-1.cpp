#include<iostream>
int main()
{
	int a, k;
	scanf("%d", &a);
	if (a > 0)
	{
		printf("%d:\n", a);
		for (k = 1;k<=a; k++)
		{
			if ((a%k)==0)
			{
				printf("%d\n", k);
			}
		}
		printf("\n");
	}
}