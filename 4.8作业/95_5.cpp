#include<iostream>
int isOE(int number);
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d",isOE(n));
}
int isOE(int number)
{
	if (number%2==0)
	{
		return -1;
	}
	else
	{
		return 1;
	}
}