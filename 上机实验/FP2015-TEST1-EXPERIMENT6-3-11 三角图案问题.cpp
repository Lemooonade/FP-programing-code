#include<iostream>
int main()
{
	int num;
	scanf("%d", &num);
	for (int n = 1; n <= num; n++)
	{
		for (int i = 1; i <= n; i++)
		{
			printf("$");
		}
		printf("\n");
	}
}