#include<iostream>
int main()
{
	int option, a, b, c;
	scanf("%d", &option);
	while (option > 0)
	{
		scanf("%d%d%d", &a, &b, &c);
		if (a + b < c || a + c < b || b + c < a)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
		option--;
	}
}