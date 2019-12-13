#include<iostream>
int main()
{
	int a, b,result1,result2;
	scanf("%d%d", &a, &b);
	if (b == 0)
	{
		printf("ERROR");
	}
	else
	{
		result1 = a / b;
		result2 = a % b;
		printf("商为%d\n余数为%d", result1, result2);
	}
}