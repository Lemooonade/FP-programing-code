#include<iostream>
#include<math.h>
int main()
{
	float a, b,c;
	scanf_s("%f%f", &a, &b);
	c = sqrt(a * a + b * b);
	printf("%.2f", c);
	return 0;
}