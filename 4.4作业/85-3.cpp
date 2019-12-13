#include<iostream>
int main()
{
	for ( int a = 1;a <999 ;a++)
	{
		for (int b = 1; b < 999; b++)
		{
			for (int c = 1; c < 999; c++)
			{
				if ((a*a*a+b*b*b+c*c*c)== (a * 100 + b * 10 + c))
				{
					printf("%d%d%d为水仙花数\n", a, b, c);
				}
			}
		}
	}
}