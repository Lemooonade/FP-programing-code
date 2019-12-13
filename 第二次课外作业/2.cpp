#include<iostream>
#include<math.h>
int main()
{
	double fact = 1;
	for (int i = 1; i <= 10; i++)
	{
		printf("%.0lf\n", fact);
		fact = fact * i;
	}
}
