#include<iostream>
int main()
{
	int n, i=0;
	float ave = 0;
	while (true)
	{
		scanf("%d", &n);
		if (n != 0)
		{
			if (n % 2 == 0)
			{
				i++;
				ave = ave + n;
			}
		}
		else
		{
			break;
		}
	}
	printf("偶数有%d个,平均数是%.2f", i, ave / i);
}