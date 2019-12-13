#include<iostream>
int findmax(int n1, int n2, int n3);
int main()
{
	int n1=1, n2=2, n3=3;
	printf("%d", findmax(n1, n2, n3));
}
int findmax(int n1, int n2, int n3)
{
	int max;
	max = n1;
	if (n2>max)
	{
		max = n2;
	}
	if(n3>max)
	{
		max = n3;
	}
	return max;
}