#include<iostream>
using namespace std;
int main()
{
	int n, j = 0;
	int tmp_i;
	scanf("%d", &n);
	while (j < n)
	{
		int n[1000];
		char num_str[1000];
		int tmp;
		bool flag = 1;
		for (int i = 0; i < 10; i++)
		{
			scanf("%d", &n[i]);
		}
		for (int i = 0; i < 9; i++)
		{
			flag = 1;
			for (int j = 0; j < 9; j++)
			{
				if (n[j] > n[j + 1])
				{
					tmp = n[j];
					n[j] = n[j + 1];
					n[j + 1] = tmp;
					flag = 0;
				}
			}
			if (flag == 1)
			{
				break;
			}
		}
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", n[i]);
		}
		printf("\n");
		j++;
	}
}