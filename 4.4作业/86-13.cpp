#include<iostream>
int main()
{
	float n1, n2;
	while (true)
	{
		scanf("%f%f", &n1, &n2);
		if (n1>0&&n2>0)
		{
			printf("%.2f", n1 - n2);
		}
		else
		{
			break;
		}
	}
}