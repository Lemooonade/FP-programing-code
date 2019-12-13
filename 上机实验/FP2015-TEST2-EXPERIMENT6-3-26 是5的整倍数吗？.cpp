#include<iostream>
int main()
{
	int n = 0, num,j,s,x;
	scanf("%d", &num);
	while (n<num)
	{
		s = 0;
		scanf("%d", &x);
		while (x) {
			s += x % 10;
			x /= 10;
			}
		if (s % 5 == 0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		n++;
	}
}