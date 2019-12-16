#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, disc, x1, x2, p, q;
	int num;
	scanf("%d", &num);
	while (num > 0)
	{


		scanf("%lf%lf%lf", &a, &b, &c);
		if (a == 0 && b != 0 && c != 0)
			printf("%.2lf\n", (-c) / b);
		else if(a==0&&b==0&&c==0)
		{
			printf("0\n");
		}
		else if (a == 0 && b == 0 && c != 0)
		{
			printf("0\n");
		}
		else
		{
			disc = b * b - 4 * a * c;
			if (fabs(disc) <= 1e-6)
				printf("%.2lf\n", -b / (2 * a));
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
		num--;
	}
	return 0;
}