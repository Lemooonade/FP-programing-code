#include<iostream>
int main()
{
	int n1, n2, n3;
	for (int i = 100; i <= 300 ; i++)
	{
		n1 = i / 100;
		n2 = (i % 100) / 10;
		n3 = i % 10;
		if ((n1 + n2 + n3) % 5 == 0)
		{
			printf("%d\n", i);
		}
	}
}