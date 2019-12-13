#include<stdio.h>
int main()
{
	int a[5], max,num, z = 0;
	int i, j = 0;
	scanf("%d", &num);
	while (z < num)
	{
			
			for (int j = 0; j <= 4; j++)
			{
				scanf_s("%d", &a[j]);
			}
			max = a[0];
			for (int i = 1; i <= 4; i++)
			{
				if (a[i] > max)
					max = a[i];
			}
			printf("%d\n", max);
			z++;
	}
}