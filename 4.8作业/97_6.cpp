#include<iostream>
#include<math.h>
double power(double n, int p);
int main()
{
	printf("%lf", power(2, 2));
}
double power(double n, int p)
{
	return pow(n, p);
}