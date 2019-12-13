#include<iostream>
#include<math.h>
int main()
{
	float x, y;
	scanf("%f", &x);
	if (x < 1)
	{
		y = x;
	}
	else if (x >= 1 && x < 15)
	{
		y = 2 * x - 1;
	}
	else
	{
		y = 6 * x + pow(x, 2);
	}
	printf("%.2f", y);
}