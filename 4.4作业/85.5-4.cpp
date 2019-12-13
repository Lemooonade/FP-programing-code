#include<iostream>
#include<math.h>
double get_fact(int n)
{
	double fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	return fact;
}
int main()
{
	for (int i = 1; i <= 35; i++)
	{
		printf("%d!=%.0lf\n",i, get_fact(i));
	}
}