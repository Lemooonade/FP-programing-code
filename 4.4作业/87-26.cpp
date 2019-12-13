#include<iostream>
int main()
{
	int n1, n2,max,min;
	scanf("%d%d", &n1, &n2);
	if (n1 <= n2)
	{
		max = n2;
		min = n1;
	}
	else
	{
		max = n1;
		min = n2;
	}
	for (int i = max; i>0; i--)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			printf("最大公约数为%d\n", i);
			break;
		}
	}
	for (int j = min; j <= 100000; j++)
	{
		if (j%n1==j%n2)
		{
			printf("最小公倍数为%d", j);
			break;
		}
	}
}