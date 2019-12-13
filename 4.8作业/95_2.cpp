#include<iostream>
int gcd(int numa, int numb);
int main()
{
	int numa, numb;
	scanf("%d%d", &numa, &numb);
	printf("%d", gcd(numa, numb));
}
int gcd(int numa, int numb)
{
	int min;
	min = numb;
	if (numa<numb)
	{
		min = numa;
	}
	for (int i = min; i > 0; i--)
	{
		if (numa%i==0&&numb%i==0)
		{
			return i;
		}
	}
}