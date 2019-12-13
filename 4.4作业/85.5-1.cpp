#include<iostream>
#include<math.h>
int main()
{
	float n[10];
	float r1=0, r2=1, r3=0, r4;
	for (int i = 0; i <= 9; i++)
	{
		scanf("%f", &n[i]);
	}
	for (int i = 0; i <= 9; i++)
	{
		r1 = r1 + n[i];
	}
	for (int i = 0; i <= 9; i++)
	{
		r2 = r2 * n[i];
	}
	for (int i = 0; i <= 9; i++)
	{
		r3 = r3 + pow(n[i], 2);
	}
	r4 = pow(r1, 2);
	printf("%.2f\n%.2f\n%.2f\n%.2f\n", r1, r2, r3, r4);
}