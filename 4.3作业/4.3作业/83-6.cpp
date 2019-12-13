#include<iostream>
int main()
{
	int n;
	scanf("%d", &n);
	if (n % 2 == 0 && n % 3 == 0 && n % 5 == 0)
	{
		printf("It can be devided by 2,3,5");
	}
	else
	{
		printf("It can't be devided by 2,3,5");
	}
	return 0;
}