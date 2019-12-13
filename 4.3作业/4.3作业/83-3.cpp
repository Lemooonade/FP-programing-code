#include<iostream>
#include<math.h>
int main()
{
	double a, b, c, delta;
	scanf("%lf%lf%lf", &a, &b, &c);
	delta = pow(b, 2) - 4 * a * c;
	if (delta < 0)
	{
		printf("方程的一个虚根=%.2lf+%.2lfi", -b / (2 * a), sqrt(-delta) / (2 * a));
		printf("方程的另一个虚根=%.2lf-%.2lfi", -b / (2 * a), sqrt(-delta) / (2 * a));
	}
	else if(delta==0)
	{
		printf("方程有两个相同的实根=%.2lf", (-b) / (2 * a));
	}
	else
	{
		printf("方程的一个实根=%.2lf",-b+sqrt(delta) / (2 * a));
		printf("方程的另一个实根=%.2lf", -b - sqrt(delta) / (2 * a));
	}
	return 0;
}