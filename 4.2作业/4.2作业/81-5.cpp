#include<iostream>
#define T 20
int main()
{
	int v0, a, x, v1;
	v0 = 10, a = 2;
	v1 = v0 + a * T;
	x = v0 * T + 0.5 * a * T * T;
	printf("X=%d,V1=%d", x, v1);
	return 0;

}