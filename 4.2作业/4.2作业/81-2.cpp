#include<iostream>
#include<math.h>
int main()
{
	int a, b, c;
	float d, v1, v2;
	scanf_s("%d%d%d", &a, &b ,&c);
	d = b * b - 4.0 * a * c;
	v1 = (-1 * b + sqrt(d)) / 2 / a;
	v2 = (b + sqrt(d)) / 2 / a;
	printf("v1=%f\n", v1);
	printf("v2=%f", v2);
	return 0;

}