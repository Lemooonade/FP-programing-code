#include<iostream>
int main()
{
	char n1;
	scanf("%c", &n1);
	if ((n1 <= 'Z' && n1>='A') || (n1 <= 'z' && n1>='a'))
	{
		if (n1 <= 'Z' && n1>='A')
		{
			n1 = n1 + 32;
		}
		else
		{
			n1 = n1 - 32;
		}
		printf("%c", n1);
	}
	else
	{
		printf("The charactor need not to be changed");
	}
}