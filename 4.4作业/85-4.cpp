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
	bool TorF=1;
	double x, sin_x=0L;
	scanf("%lf", &x);
	for (int i = 1; TorF; i=i+4)
	{
		sin_x = sin_x + pow(x,i) / get_fact(i) - pow(x, i+2) / get_fact(i + 2);
		if (pow(x, i + 2) / get_fact(i + 2)<1e-5)
		{
			TorF = 0;
		}
	}
	printf("%lf", sin_x);
}