#include<iostream>
#include<math.h>
#define PI 3.14
int main()
{
	float r, h, c, s;
	scanf("%f%f", &r, &h);
	c = PI * 2 * r;
	s=2* pow(r, 2) * PI+c*h;
	printf("%.2f %.2f", c, s);
	return 0;
}