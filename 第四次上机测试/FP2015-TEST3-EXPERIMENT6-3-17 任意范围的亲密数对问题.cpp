#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, j = 0;
	int tmp_i;
	scanf("%d", &n);
	while (j < n)
	{
		int m, n;
		cin >> m >> n;
		for (int a = m, b, c, t; a <= n; a++) 
		{
			b = 1, t = sqrt(a);
			for (int i = 2; i <= t; i++)
			{
				if (a % i == 0) b += i + a / i;
			}
			if (t * t == a)
			{
				b -= t;
			}
			c = 1, t = sqrt(b);
			for (int i = 2; i <= t; i++)
			{
				if (b % i == 0) 
				{
					c += i + b / i; 
				}

			}
			if (t * t == b) 
			{
				c -= t; 
			}
			if (a == c && a != b && b <= n)
			{
				printf("%d %d\n",a,b);
			}
		}
		j++;
	}
}