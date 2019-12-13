#include<iostream>
int main()
{
	long int n1, n2;
	scanf("%ld%ld", &n1, &n2);
	for (long int i = n1; i <= n2; i++)
	{
		printf("%ld %ld %ld\n", i, i * i, i * i * i);
	}
}