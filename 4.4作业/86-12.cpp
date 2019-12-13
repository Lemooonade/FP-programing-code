#include<iostream>
int main()
{
	int num;
	char n,st1='A',st2;
	scanf("%c", &n);
	num = n - 64;
	for (int i = 1; i <= num; i++)
	{
		st1 = 'A';
		for (int n =i; n <= num; n++)
		{
			printf(" ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("%c", st1);
			st1++;
		}
		st2 = st1 - 2;
		for (int k = i-1; k >0 ; k--)
		{
			printf("%c", st2);
			st2--;
		}
		printf("\n");
	}
}