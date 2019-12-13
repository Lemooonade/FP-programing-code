#include<iostream>
#include<math.h>
int main()
{
	int n = 0;
	for (int i = 7; i <= 91; i = i + 2)
	{
		if ((i % 3) == 0)
		{
			n++;
		}
	}
	printf("%d", n);
}