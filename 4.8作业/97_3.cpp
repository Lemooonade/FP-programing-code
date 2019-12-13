#define PI 3.14
#include<iostream>
double cvolume(double r, double h);
int main()
{
	printf("%lf", cvolume(4.0, 4.9));
}
double cvolume(double r, double h)
{
	return PI * r * r * h;
}