#include<iostream>
#include<math.h>
int main()
{
	float a, b, c, d, s;
	scanf_s("%f%f%f", &a, &b, &c);
	d = 0.5 * (a + b + c);
	s = sqrt(d * (d - a) * (d - b) * (d - c));
	printf("%.2f", s);
	return 0;
}