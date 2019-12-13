#include<iostream>
#include <time.h>
int main()
{
	int a[1000];
	int i, length, n, j = 0;
	bool flag = 1;
	srand(time(NULL));
	scanf("%d", &length);
	for (int i = 0; i < length; i++)
	{
		a[i] = rand() % 11;
		printf("%d\n", a[i]);
		flag = 1;
		if (a[i] == 1 || a[i] == 0)
		{
			flag = 0;
		}
		for(n = 2;  n< a[i]; n++)
		{
			if (a[i] % n == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag != 0)
		{
			j++;
		}
	}
	printf("   %d", j);
}