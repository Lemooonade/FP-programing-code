#include<iostream>
double carea(double r);
int main()
{
	float r;
	scanf("%f", &r);
	printf("%.2f", carea(r));
}
double carea(double r)
{
	return r * r * 3.14;
}