#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, disc, x1, x2, p, q;
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a==0)           
		printf("%.2lf",(-c)/b);
	else
	{
		disc = b * b - 4 * a * c;
		if (fabs(disc) <= 1e-6)
			printf("%.2lf", -b / (2 * a));
		else if (disc > 1e-6)
		{
			x1 = (-b + sqrt(disc)) / (2 * a);
			x2 = (-b - sqrt(disc)) / (2 * a);
			printf("%.2lf %.2lf\n", x1, x2);
		}
		else
		{
			printf("0\n");
		}
	}
	return 0;
}