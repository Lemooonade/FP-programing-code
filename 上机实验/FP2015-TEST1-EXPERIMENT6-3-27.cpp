#include<iostream>
int main()
{
	int  m, n, a, b, i, t,num,j=0;
	scanf("%d", &num);
	while (j < num)
	{
		scanf("%d%d", &a, &b); 
		m = a; 
		n = b;
		for (i = 1; i <= a; i++)
			if (a % i == 0 && b % i == 0)
				t = i;
		printf("%d\n", t);
		j++;
	}
}