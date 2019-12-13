#include<iostream>
#include<math.h>
int main()
{
	int n, num, j = 0;
	scanf("%d", &num);
	while (j < num)
	{

		double fact = 1;
		scanf("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			fact = fact * i;
		}
		printf("%.0lf\n", fact);
		j++;
	}

}
