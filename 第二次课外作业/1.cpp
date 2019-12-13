#include<iostream>
#include<math.h>
double get_fact(int n);
int main()
{
	for (int i = 1; i < 11; i++)
	{
		printf("%.0lf\n", get_fact(i));
	}
}
double get_fact(int n)
{
	double fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	return fact;
}