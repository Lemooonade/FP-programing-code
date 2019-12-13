#include<iostream>
int main()
{
	int n[20];
	int z = 0, f = 0, zero = 0;
	for (int i = 0; i < 20; i++)
	{
		scanf("%d", &n[i]);
		if (n[i] < 0)
		{
			f++;
		}
		else if (n[i] == 0)
		{
			zero++;
		}
		else
		{
			z++;
		}
	}
	printf("正数有%d个\n", z);
	printf("负数有%d个\n", f);
	printf("0有%d个\n", zero);
}