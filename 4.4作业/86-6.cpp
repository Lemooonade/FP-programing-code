#include<iostream>
#include<math.h>
int main()
{
	double pi_4=1.0L;
	for (int i=1;i<1000;i++)
	{
		pi_4 = pi_4+pow(-1, i) * (1.0 / (2.0 * i + 1));
		//printf("%lf\n", pi_4 * 4);
	}
	printf("piΪ%lf", pi_4 * 4.0);
}