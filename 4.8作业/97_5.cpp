#include<iostream>
long fac(int n);
int main()
{
	printf("%ld", fac(10));
}
long fac(int n)
{
	if (n==1)
	{
		return 1;
	}
	else
	{
		n = n * fac(n - 1);
	}
}