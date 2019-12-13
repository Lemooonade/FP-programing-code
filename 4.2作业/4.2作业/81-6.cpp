#include<iostream>
int main()
{
	float n;
	long double lqt;
	scanf_s("%lf", &lqt);
	n = (lqt*950) / (1e-23);
	printf("%.1lf", n);
	return 0;
}