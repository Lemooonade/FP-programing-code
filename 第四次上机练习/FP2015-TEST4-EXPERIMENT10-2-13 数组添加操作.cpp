#include<iostream>
int main()
{
	int n, j = 0;
	int tmp_i;
	scanf("%d", &n);
	while (j < n)
	{
		int num[1000];
		int add_num,continue_id,max;
		scanf("%d", &num[0]);
		for (int i = 1;; i++)
		{
			scanf("%d", &num[i]);
			if (num[i] == 0)
			{
				tmp_i = i - 1;
				break;
			}
		}
		scanf("%d", &add_num);
		max = num[0];
		for (int z = 1; z <= tmp_i; z++)
		{
			if (num[z]>max)
			{
				max = num[z];
			}
		}
		if (add_num>max)
		{
			for (int k = 0; k <= tmp_i; k++)
			{
				printf("%d ", num[k]);
			}
			printf("%d ", add_num);
		}
		else
		{
			for (int z = 0; z <= tmp_i; z++)
			{
				if (add_num < num[z])
				{
					printf("%d ", add_num);
					continue_id = z;
					break;
				}
				else
				{
					printf("%d ", num[z]);
				}
			}
			for (int k = continue_id; k <= tmp_i; k++)
			{
				printf("%d ", num[k]);
			}
		}
		printf("\n");
		j++;
	}
}