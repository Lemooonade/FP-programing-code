#include<iostream>
int main()
{
	int n1, n2, n3;
	scanf_s("%d%d%d", &n1, &n2, &n3);
	if (n1 >= n2&& n1 >= n3)
	{
		printf("The max is %d", n1);
	}
	else if (n2 >= n1&& n2>=n3)
	{
		printf("The max is %d", n2);
	}
	else if (n3>=n1&&n3>=n2)
	{
		printf("The max is %d", n3);
	}
	return 0;
}