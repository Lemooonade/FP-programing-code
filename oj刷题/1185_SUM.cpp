#include<iostream>
int main()
{
	int option;
	scanf("%d", &option);
	while (option>0)
	{
		int n,sum=0;
		int num[100];
		scanf("%d", &n);
		while (n>0)
		{
			scanf("%d", &num[n]);
			sum += num[n];
			n--;
		}
		printf("%d\n", sum);
		option--;
	}
}