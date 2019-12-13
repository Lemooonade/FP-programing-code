#include<iostream>
int lcm(int x1, int x2);
int main()
{
	printf("%d", lcm(32, 23));
}
int lcm(int x1, int x2)
{
	int max=x1;
	if (max<x2)
	{
		max = x2;
	}
	for (int i = max; ; i++)
	{
		if (i%x1==0&&i%x2==0)
		{
			return i;
		}
	}
}