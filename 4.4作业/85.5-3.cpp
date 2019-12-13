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
}int main()
{
	bool TorF = 1;
	double e=1.0L;
	for (int i = 1;TorF ; i++)
	{
		e = e + (1.0L / get_fact(i));
		if (1.0L / get_fact(i)<=1e-6)
		{
			TorF = 0;
		}
	}
	printf("%lf", e);
}