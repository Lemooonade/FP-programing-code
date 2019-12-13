#include<iostream>
int main()
{
	int n1[1000], n2[1005];
	int num,tmp,flag=0;
	for (int i = 0; i < 1000; i++)
	{
		n1[i] = 2000-2*i;
		printf("%d ", n1[i]);
	}
	printf("\n");
	scanf("%d",&num);
	for (int a = 0; a < 1001; a++)
	{
		if (a < 1000)
		{
			n2[a] = n1[a];
		}
		else
		{
			n2[a] = num;
		}
	}
	for (int j = 0; j < 1000; j++)
	{
		for (int i = 0; i < 1000; i++)
		{
			if (n2[i] < n2[i + 1])
			{
				tmp = n2[i];
				n2[i] = n2[i + 1];
				n2[i + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < 1001; i++)
	{
		printf("%d ", n2[i]);
	}
}