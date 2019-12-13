#include<iostream>
#include<math.h>
int main()
{
	int n = 0;
	for (int i = 7; i <= 100; i++)
	{
		if ((i % 5) != 0)
		{
			printf("%4d", i);
			n++;
			if (n == 5)
			{
				printf("\n");
				n = 0;
			}
		}
	}
}