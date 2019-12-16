#include<iostream>
#include<string>
#include<string.h>
int main()
{
	int n,n1;
	int num_a=0, num_e=0, num_i=0, num_o=0, num_u=0;
	scanf("%d", &n);
	n1 = n;
	while (n>=0)
	{
		char str[1000];
		gets_s(str);
		for (int i = 0; i < strlen(str); i++)
		{
			if (str[i]=='a')
			{
				num_a++;
			}
			if (str[i] == 'e')
			{
				num_e++;
			}
			if (str[i] == 'i')
			{
				num_i++;
			}
			if (str[i] == 'o')
			{
				num_o++;
			}
			if (str[i] == 'u')
			{
				num_u++;
			}
		}
		if (n==n1)
		{
			n--;
			continue;
		}
		printf("%d %d %d %d %d\n", num_a, num_e, num_i, num_o, num_u);
		num_a = 0, num_e = 0, num_i = 0, num_o = 0, num_u = 0;
		n--;
	}
}